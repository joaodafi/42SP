int	ft_str_is_uppercase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			counter++;
		else
			return (0);
	}
	return (1);
}
