char	*ft_strstr(char *str, char *to_find)
{
	int		length;
	int		c1;
	int		c2;

	length = 0;
	while (to_find[length])
		length++;
	if (length == 0)
		return (str);
	c1 = 0;
	c2 = 0;
	while (str[c1])
	{
		while (to_find[c2] == str[c1 + c2])
		{
			if (c2 + 1 == length)
				return (&str[c1]);
			c2++;
		}
		c2 = 0;
		c1++;
	}
	return (0);
}
