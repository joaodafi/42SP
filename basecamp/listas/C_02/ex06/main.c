#include <stdio.h>

int		ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[] = " fdhhAAA | /%f1235`";
	char	str2[] = "ABCDE!á";
	char	str3[] = "aasr342AA433¬¬¬";
	int		validate;

	validate = 0;
	if (ft_str_is_printable(str1))
	{
		printf ("1ª string has printable chars only : %s\n", str1);
		validate++;
	}
	if (ft_str_is_printable(str2))
	{
		printf ("2ª string has printable chars only: %s\n", str2);
		validate++;
	}
	if (ft_str_is_printable(str3))
	{
		printf ("3ª string has printable chars only: %s\n", str3);
		validate++;
	}
	if (validate == 1)
		printf ("%d string with printable chars only.\n", validate);
	else
		printf ("%d strings with printable chars only.\n", validate);
	return (0);
}