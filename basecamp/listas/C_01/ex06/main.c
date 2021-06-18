#include <stdio.h>

int		ft_strlen(char *str);

int	main(void)
{
	int		n;
	char	str[] = "Has 17 characters";

	n = 0;
	printf ("n = %d is wrong, because str contains \"%s\"\n", n, str);
	n = ft_strlen (str);
	printf ("n = %d is correct, because str contains \"%s\"\n", n, str);
}
