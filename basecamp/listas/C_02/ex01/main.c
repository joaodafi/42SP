#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	char	src[] = "A";
	char	dest[] = "aaaa";
	unsigned int	n;
	char	*dest_p;

	n = 1;
	dest_p = dest;
	//printf("%s\n", dest);
	printf("%s\n", dest_p);
	dest_p = ft_strncpy (dest, src, n);
	//strcpy (dest,src);
	//printf("%s\n", dest);
	printf("%s\n", dest_p);
	return (0);
}