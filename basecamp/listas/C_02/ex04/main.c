#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abe!dg";
	char	str3[] = "aasr342AA433";
	int		validate;

	validate = 0;
	if (ft_str_is_lowercase(str1))
	{
		printf ("1ª string is lowercase only.\n");
		validate++;
	}
	if (ft_str_is_lowercase(str2))
	{
		printf ("2ª string is lowercase only.\n");
		validate++;
	}
	if (ft_str_is_lowercase(str3))
	{
		printf ("3ª string is lowercase only .\n");
		validate++;
	}
	if (validate == 1)
		printf ("%d string with lowercase chars only.\n", validate);
	else
		printf ("%d strings with lowercase chars only.\n", validate);
	return (0);
}