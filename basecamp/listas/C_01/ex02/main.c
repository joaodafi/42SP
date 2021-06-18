#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int		a;
	int		b;

	a = 3;
	b = 2;
	printf ("was: %d and %d \n", a, b);
	ft_swap(&a, &b);
	printf ("is: %d and %d \n", a, b);
	return (0);
}
