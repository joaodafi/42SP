#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main (void)
{
	char	src[] = "AAAAAAAAAAAAA";
	char	dest[] = "aaaa";
	char	*dest_p;

	dest_p = dest;
	printf("%s\n", dest);
	printf("%s\n", dest_p);
	dest_p = ft_strcpy (dest, src);
	//strcpy (dest,src);
	printf("%s\n", dest);
	printf("%s\n", dest_p);
	return (0);
}