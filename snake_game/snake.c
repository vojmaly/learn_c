#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> // must have to work with strings 
#include <termios.h> // terminal hack
#include <unistd.h> // terminal hack

// Terminal hack for keypress
struct termios orig_termios;

void disableRawMode() {
    struct termios raw = orig_termios;
    raw.c_lflag |= ICANON | ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);

    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ICANON | ECHO);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

/* This is main declarations */
#define  MAX_SIZE 16 // define max snake square
char mainScreen[MAX_SIZE][MAX_SIZE]; // 2D array for snake square
int  tail_x[MAX_SIZE * MAX_SIZE];
int  tail_y[MAX_SIZE * MAX_SIZE];

// functions Definitions
void gfx_initScreen();
void gfx_drawScreen();
void gfx_message();
void ctrl_keyCapture();
void ctrl_headMovement();
void ctrl_headTailBehaviour();
void ctrl_clock();
void ctrl_drawRngFood();
void ctrl_gameOver();
int  rng();


// ######################################
// ######################################
// main
int head_x = 0;
int head_y = 0;
int food_x = 0;
int food_y = 0;
int status_message = 0;
int score = 0;
int last_score = 0;
int is_started = 0;
int can_move = 0;
int fp_move = 0;

int main() {
    system("clear");
    enableRawMode();
    printf("\033[?25l"); // hide cursor 
    gfx_initScreen();
    while (1) {
        if (can_move) {
            gfx_initScreen();
        }
        ctrl_clock();
        ctrl_keyCapture();
        gfx_drawScreen();
        gfx_message(status_message);
        ctrl_headTailBehaviour();
        ctrl_headMovement();
    }
    return 0;
}
// ######################################
// ######################################

// screen functions
void gfx_initScreen() {
    for (int y = 0; y < MAX_SIZE; y++) {
        for (int x = 0; x < MAX_SIZE; x++) {
            mainScreen[y][x] = ' ';
        }
    }

    for (int i = 0; i < MAX_SIZE; i++) {
        mainScreen[0][i] = 'X';
        mainScreen[MAX_SIZE - 1][i] = 'X';
        mainScreen[i][0] = 'X';
        mainScreen[i][MAX_SIZE - 1] = 'X';
    }
}

void gfx_drawScreen() {
    printf("\033[H"); // code to get top left
    for (int y = 0; y < MAX_SIZE; y++) {
        for (int x = 0; x < MAX_SIZE; x++) {
            printf("%-2c", mainScreen[y][x]);
            fflush(stdout); // imediately write output
        }
    printf("\n");
    fflush(stdout);
    }
}

void gfx_message (int is_message) {
    printf("Arrow keys for -> movement. (Q)uit or (N)ew Game?\n");
    printf("Your Score: %i   \n", score);
    switch (is_message) {
        case 0: printf("Start (N)ew Game                 "); break;
        case 5: printf("New Game started                 "); break;
        case 99: printf("GAME OVER (Q)uit or (N)ew Game? "); ctrl_gameOver(); is_started = 0; break;
    }
    printf("\n\nLast Game Score: %i  ", last_score);
}

// movement functions
void ctrl_keyCapture() { /*
    Here is explained how arrow keys are send in sequence
    key press   escape sequence     third char  meaning
    #####################################################
    ↑ Up	    ESC [ A	            'A'	        Up arrow
    ↓ Down	    ESC [ B	            'B'	        Down arrow
    → Right	    ESC [ C	            'C'	        Right arrow
    ← Left	    ESC [ D	            'D'	        Left arrow */

    char ch[3];

    // hack to get input imediately
    ssize_t n = read(STDIN_FILENO, &ch, sizeof(ch));

    if (ch[0] == 27 && n == 3) { // is ESC first char?
        if (ch[1] == '[') { // is second char '['?
            switch (ch[2]) { // switch case ABCD?
                case 'A': status_message = 1; break;
                case 'B': status_message = 2; break;
                case 'C': status_message = 3; break;
                case 'D': status_message = 4; break;
            }
        }
    } else if (n == 1 && ch[0]  == 'q' || ch[0] == 'Q') {
        printf("\nQuiting...\n");
        printf("\033[?25h"); // enable cursor after quit
        exit(0); // exit app <stdlib.h>
    } else if (n == 1 && ch[0]  == 'n' || ch[0] == 'n') {
        status_message = 5;
    }
}

void ctrl_headMovement() {
    // directional movement
    if (is_started) {
        //mainScreen[tail_y[0]][tail_x[0]] = '*'; // debug for draw always *
        switch (status_message) {
            case 1:
                    if (head_y != 0 && mainScreen[head_y - 1][head_x] != '*') {
                        if (can_move) {
                            head_y--;
                        }
                    } else {
                    status_message = 99;
                    }
                    break;
            case 2:
                    if (head_y != MAX_SIZE - 1 && mainScreen[head_y + 1][head_x] != '*') {
                        if (can_move) {
                            head_y++;
                            }
                    } else {
                        status_message = 99;
                    }
                    break;

            case 3:
                   if (head_x != MAX_SIZE - 1 && mainScreen[head_y][head_x + 1] != '*') {
                        if (can_move) {
                            head_x++;
                        }
                    } else {
                       status_message = 99;
                    }
                    break;
            case 4:
                    if (head_x != 0 && mainScreen[head_y][head_x - 1] != '*') {
                        if (can_move && status_message) {
                             head_x--;
                        }
                    } else {
                        status_message = 99;
                    }
                    break;
            }
    }
}

void ctrl_headTailBehaviour() {
    // draw start snake point
    if (!is_started && status_message == 5) {
        head_x = rng(0);
        head_y = rng();
        ctrl_drawRngFood(); // draw food
        status_message = 1;
        is_started = 1;
    }
   if (is_started) {
        // draw food and head
        mainScreen[food_y][food_x] = '#';
        mainScreen[head_y][head_x] = '0';

        // eval if food is eaten
        if (can_move && head_x == food_x && head_y == food_y) {
            tail_x[score + 1] = food_x;
            tail_y[score + 1] = food_y;
            ctrl_drawRngFood();
            score++;
        }

        // snake movement and tail drawning
        if (can_move) {
            tail_x[0] = head_x;
            tail_y[0] = head_y;

            // shift all elements in array right !!!crucial function!!!
            for (int i = score; i > 0; i--) {
                tail_x[i] = tail_x[i - 1];
                tail_y[i] = tail_y[i - 1];
            }
        }

        // draw buffer of 2D array
        for (int i = 0; i <= score; i++) {
            if (score != 0) {
            mainScreen[tail_y[i]][tail_x[i]] = '*';
            }
        }
    }
}



void ctrl_drawRngFood() {
    int draw_x = rng(16);
    int draw_y = rng(25);

    if (mainScreen[draw_y][draw_x] != ' ') {
        ctrl_drawRngFood();
    } else {
        mainScreen[draw_y][draw_x] = '#';
        food_x = draw_x;
        food_y = draw_y;
    }
}

void ctrl_gameOver() {
    if (is_started) {
        last_score = score;
    }
    score = 0;
    for (int i = 0; i < MAX_SIZE * MAX_SIZE; i++) {
        tail_x[i], tail_y[i] = 0;
    }
    gfx_initScreen();
}


// CLOCK with difficulty option
void ctrl_clock() {
    int difficulty = 4;
    time_t now = clock() / 100000;

    if (score > 8) {
        if (now % difficulty == 0) {
            if (!fp_move) {
                can_move = 1;
                fp_move = 1;
            } else {
                can_move = 0;
            }
        } else {
            if (fp_move) {
                can_move = 1;
                fp_move = 0;
            } else {
                can_move = 0;
            }
        }
    } else {
        if (now % difficulty == 0) {
             if (!fp_move) {
                 can_move = 1;
                 fp_move = 1;
             } else {
                 can_move = 0;
             }
        } else {
                fp_move = 0;
        }
    }
}

// RNG
int rng(int seed) {
    srand(time(NULL) % seed); // Seed the random number generator
    int min = 2, max = MAX_SIZE - 2;
    int r = rand() % (max - min + 1) + min;
    return r;
}
