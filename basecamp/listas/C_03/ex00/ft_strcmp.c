int	ft_strcmp(char *s1, char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter])
	{
		if (s1[counter] != s2[counter])
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		counter++;
	}
	return (0);
}
