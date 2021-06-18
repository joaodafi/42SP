#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[5] = "3210";
	char	dest[11] = "987654";
	unsigned int	nb;
	
	nb = 3;
	printf ("Source is:              %s\n", src);
	printf ("Destinyis:              %s\n", dest);
	printf ("String concatenatio is: %s\n", ft_strncat(dest, src, nb));
}