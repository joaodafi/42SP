char	*ft_strlowcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += ' ';
		counter++;
	}
	return (str);
}
