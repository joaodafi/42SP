char	*ft_strcapitalize(char *str)
{
	int		counter;
	int		mark;

	counter = 0;
	mark = 0;
	while (str[counter])
	{
		if (str[counter] >= '0' && str[counter] <= '9')
			mark = 1;
		else if ((str[counter] >= 'a' && str[counter] <= 'z') && mark == 0)
		{
			str[counter] -= 32;
			mark = 1;
		}
		else if (str[counter] >= 'a' && str[counter] <= 'z')
			mark = 1;
		else if ((str[counter] >= 'A' && str[counter] <= 'Z') && mark == 1)
			str[counter] += 32;
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
			mark = 1;
		else
			mark = 0;
		counter++;
	}
	return (str);
}
