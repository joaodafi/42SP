void	ft_ultimate_div_mod(int *a, int *b)
{
	int		value_holder;

	if (*b != 0)
	{
		value_holder = *a;
		*a /= *b;
		*b = value_holder % *b;
	}
}
