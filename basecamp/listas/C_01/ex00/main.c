#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int		value;

	value = 1;
	printf ("was: %d \n", value);
	ft_ft(&value);
	printf ("is: %d \n", value);
	return (0);
}
