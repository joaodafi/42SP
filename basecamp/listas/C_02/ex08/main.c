#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "TUDO EM MAIUCSULO";
	char	str2[] = "$!MBOLO$ NUM3R0R +-ªLEtrASº";

	printf ("Antes: %s\n", str1);
	printf ("Antes: %s\n", str2);
	ft_strlowcase (str1);
	ft_strlowcase (str2);
	printf ("Depois: %s\n", str1);
	printf ("Depois: %s\n", str2);
	return (0);
}