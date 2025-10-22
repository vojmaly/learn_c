/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex06.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 09:56:45 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 10:07:59 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	char	my_char;

	my_char = 'a';
	printf("%c\n", my_char + 1);
	printf("%c\n", my_char + 'a');
	printf("%c\n", my_char + 25);
	printf("%c\n", my_char + 0);
	return (0);
}
