int	ft_str_is_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < ' ' || str[counter] > '~')
			return (0);
		counter++;
	}
	return (1);
}
