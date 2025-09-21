#include <stdio.h>

int my_int = 99;
float my_float = 0.123;
char my_char = 'C';
double my_dw = 3.141592653589793;

int main() {
    printf("Integer: %d\n", my_int);
    printf("Float: %f\n", my_float);
    printf("Character: %c\n", my_char);
    printf("Long Float: %lf\n", my_dw); //prints 6 digits by default
    printf("Long Float: %.15lf\n", my_dw);
    return 0;
}
