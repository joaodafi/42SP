#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "123456789";
	char	dest[] = "Nada";
	unsigned int	size;

	size = 4;
	printf("Source: %s\n", src);
	printf("Original Destiny: %s\n", dest);
	printf("Source Length: %d\n", ft_strlcpy(dest, src, size));
	printf("New Destiny: %s\n", dest);
	return (0);
}