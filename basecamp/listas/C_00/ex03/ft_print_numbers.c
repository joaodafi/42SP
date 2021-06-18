#include <unistd.h>

void	ft_print_numbers(void)
{
	int		counter;
	char	numbers;

	counter = 0;
	numbers = '0';
	while (counter < 10)
	{
		write (1, &numbers, 1);
		numbers++;
		counter++;
	}
}
