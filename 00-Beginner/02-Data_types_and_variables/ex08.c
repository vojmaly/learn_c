/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex08.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 10:27:09 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 12:21:44 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	tmp;

	a = 10;
	b = 20;
	printf("Before a: %d; b: %d;\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("After a: %d; b: %d;\n", a, b);
	return (0);
}
