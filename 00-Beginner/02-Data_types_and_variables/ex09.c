/* ************************************************************************** */
/*                                                                            */
/*                                                         .-'~~~-.           */
/*   ex09.c                                               'o  oOOOo`.         */
/*                                                      :~~~-.oOo   o`.       */
/*   By: root <amanita@muscaria.org>                      `.  ~-.  oOOo.      */
/*                                                         `.; / ~.  OO:      */
/*   Created: 2025/10/21 10:52:58 by root                   .'  ;-- `.o.'     */
/*   Updated: 2025/10/21 12:23:35 by root                  ,'  ; ~~--'~       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	main(void)
{
	float	rad;

	printf("Add circle radius to calculate area in mm: ");
	scanf("%f", &rad);
	printf("Area is: %f mm2\n", 3.1415927 * rad * rad);
	return (0);
}
