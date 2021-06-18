#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "AFDDaeff";
	char	str2[] = "gsdgAFDD~";
	char	str3[] = "AFDD135";
	int		validate;

	validate = 0;
	if (ft_str_is_alpha(str1))
	{
		printf ("1ª string is alphabetic only.\n");
		validate++;
	}
	if (ft_str_is_alpha(str2))
	{
		printf ("2ª string is alphabetic only.\n");
		validate++;
	}
	if (ft_str_is_alpha(str3))
	{
		printf ("3ª string is alphabetic only.\n");
		validate++;
	}
	printf ("%d strings with alphabetic chars only.\n", validate);
	return (0);
}