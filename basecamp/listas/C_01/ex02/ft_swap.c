void	ft_swap(int *a, int *b)
{
	int		value_holder;

	value_holder = *a;
	*a = *b;
	*b = value_holder;
}
