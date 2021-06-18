#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		counter;
	char	start_alphabet;

	counter = 0;
	start_alphabet = 'z';
	while (counter < 26)
	{
		write (1, &start_alphabet, 1);
		start_alphabet--;
		counter++;
	}
}
