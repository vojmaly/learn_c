/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex10.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 12:37:46 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 13:00:07 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	test_fc(void);

char	g_my_char = 'C';

int	main(void)
{
	int	in_fc;

	in_fc = 99;
	test_fc();
	g_my_char = 'D';
	printf("main: %d\n", in_fc);
	printf("global: %c\n", g_my_char);
	return (0);
}

void	test_fc(void)
{
	int	in_test_fc;

	in_test_fc = 666;
	g_my_char = 'B';
	printf("in_test_fc: %d\n", in_test_fc);
}
