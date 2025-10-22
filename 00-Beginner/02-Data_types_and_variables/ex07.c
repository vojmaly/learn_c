/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex07.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 10:11:44 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 10:24:35 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/*
The space before %c in scanf(" %c", &ch) is important:
It tells scanf to skip any leading whitespace characters 
(like '\n', ' ', or '\t').
This is especially useful after reading other input types 
(like numbers or strings),
because pressing Enter leaves a newline in the input buffer.
Without the space, scanf("%c", &ch) might read that leftover newline 
instead of waiting for new input.
*/

int	main(void)
{
	int		ui_i;
	float	ui_f;
	char	ui_c;

	ui_i = 0;
	ui_f = 0;
	ui_c = '\x00';
	printf("Enter integer: ");
	scanf("%d", &ui_i);
	printf("Enter float: ");
	scanf("%f", &ui_f);
	printf("Enter char: ");
	scanf("	%c", &ui_c);
	printf("You entered int: %d; float: %f; char: %c;\n", ui_i, ui_f, ui_c);
	return (0);
}
