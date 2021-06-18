#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnumber (int i)
{
	char	c;

	c = '0' + i;
	ft_putchar (c);
}

void	ft_comb(int hundreds, int tens, int ones)
{
	ft_putnumber (hundreds);
	ft_putnumber (tens);
	ft_putnumber (ones);
	if (!(hundreds == 7 && tens == 8 && ones == 9))
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb(void)
{
	int		hundreds;
	int		tens;
	int		ones;

	hundreds = 0;
	while (hundreds <= 9)
	{
		tens = hundreds + 1;
		while (tens <= 9)
		{
			ones = tens + 1;
			while (ones <= 9)
			{
				ft_comb (hundreds, tens, ones);
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
}
