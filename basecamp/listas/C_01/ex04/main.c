#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int		value_a;
	int		value_b;

	value_a = 11;
	value_b = 3;
	printf ("value a: %d\n", value_a);
	printf ("value b: %d\n", value_b);
	ft_ultimate_div_mod (&value_a, &value_b);
	printf ("division of a and b is: %d\n", value_a);
	printf ("rest of division of a and b is: %d\n", value_b);
	return (0);
}
