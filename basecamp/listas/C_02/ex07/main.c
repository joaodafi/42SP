#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "tudo em minunsculo";
	char	str2[] = "$!mbolo$ num3r0s +-ªleTRasº";

	printf ("Antes: %s\n", str1);
	printf ("Antes: %s\n", str2);
	ft_strupcase (str1);
	ft_strupcase (str2);
	printf ("Depois: %s\n", str1);
	printf ("Depois: %s\n", str2);
	return (0);
}