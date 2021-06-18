void	ft_rev_int_tab(int *tab, int size)
{
	int		value_holder;
	int		counter;

	counter = 0;
	while (counter < (size / 2))
	{
		value_holder = tab[counter];
		tab[counter] = tab[(size - 1) - counter];
		tab[(size - 1) - counter] = value_holder;
		counter++;
	}
}
