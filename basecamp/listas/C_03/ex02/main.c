#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[5] = "3210";
	char	dest[11] = "987654";

	printf ("Source is:              %s\n", src);
	printf ("Destinyis:              %s\n", dest);
	printf ("String concatenatio is: %s\n", ft_strcat(dest,src));
}