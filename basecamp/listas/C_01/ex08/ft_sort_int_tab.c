void	ft_sort_int_tab(int *tab, int size)
{
	int		value_holder;
	int		counter;

	counter = 0;
	while (counter < (size - 1))
	{
		if (tab[counter] > tab[counter + 1])
		{
			value_holder = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = value_holder;
			counter = 0;
		}
		else
			counter++;
	}
}
