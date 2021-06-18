#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "413545";
	char	str2[] = "534423452";
	char	str3[] = "aasr342AA433";
	int		validate;

	validate = 0;
	if (ft_str_is_numeric(str1))
	{
		printf ("1ª string is numeric only.\n");
		validate++;
	}
	if (ft_str_is_numeric(str2))
	{
		printf ("2ª string is numeric only.\n");
		validate++;
	}
	if (ft_str_is_numeric(str3))
	{
		printf ("3ª string is nmeric only .\n");
		validate++;
	}
	if (validate == 1)
		printf ("%d string with numeric chars only.\n", validate);
	else
		printf ("%d strings with numeric chars only.\n", validate);
	return (0);
}
