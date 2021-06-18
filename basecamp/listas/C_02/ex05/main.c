#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[] = "ABCDEF";
	char	str2[] = "ABCDE!";
	char	str3[] = "aasr342AA433";
	int		validate;

	validate = 0;
	if (ft_str_is_uppercase(str1))
	{
		printf ("1ª string is uppercase only.\n");
		validate++;
	}
	if (ft_str_is_uppercase(str2))
	{
		printf ("2ª string is uppercase only.\n");
		validate++;
	}
	if (ft_str_is_uppercase(str3))
	{
		printf ("3ª string is uppercase only .\n");
		validate++;
	}
	if (validate == 1)
		printf ("%d string with uppercase chars only.\n", validate);
	else
		printf ("%d strings with uppercase chars only.\n", validate);
	return (0);
}