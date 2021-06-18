#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int		tab[] = {11, 22, 33, 44, 55};
	int		size = 5;
	int		counter;

	printf ("tab is: ");
	counter = 0;
	while (counter < size)
	{
		printf ("%d ", tab[counter]);
		counter++;
	}
	printf ("\n");
	ft_rev_int_tab (tab, size);
	printf("reversed tab is: ");
	 	counter = 0;
	while (counter < size)
	{
		printf ("%d ", tab[counter]);
		counter++;
	}
	printf ("\n");
}
