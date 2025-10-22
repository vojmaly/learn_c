/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex01.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 08:49:58 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 09:00:22 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	int		nbr_i;
	float	nbr_f;
	double	nbr_d;
	char	char_c;

	nbr_i = -2147483648;
	nbr_f = 3.14159267;
	nbr_d = 123456789.123456789;
	char_c = 'A';
	printf("%d\n", nbr_i);
	printf("%f\n", nbr_f);
	printf("%lf\n", nbr_d);
	printf("%c\n", char_c);
	return (0);
}
