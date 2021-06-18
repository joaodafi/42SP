int	ft_str_is_numeric(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= '0' && str[counter] <= '9')
			counter++;
		else
			return (0);
	}
	return (1);
}
