#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf ("Antes: %s\n", str1);
	printf ("Depois: %s\n", ft_strcapitalize (str1));
	return (0);
}