#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		tab[] = {11, 99, 88, 33, 22};
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
	ft_sort_int_tab (tab, size);
	printf("tab agora é: ");
	 	counter = 0;
	while (counter < size)
	{
		printf ("%d ", tab[counter]);
		counter++;
	}
	printf ("\n");
}
