char	*ft_strupcase(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] -= ' ';
		counter++;
	}
	return (str);
}
