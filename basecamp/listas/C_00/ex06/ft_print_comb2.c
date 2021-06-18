#include <unistd.h>

void	ft_write_duble(int n)
{
	char	p1;
	char	p2;

	p1 = '0' + (n / 10);
	p2 = '0' + (n % 10);
	write (1, &p1, 1);
	write (1, &p2, 1);
}

void	ft_print_comb2(void)
{
	int		first_duble;
	int		second_duble;
	int		first_limit;
	int		second_limit;

	first_limit = 98;
	second_limit = 99;
	first_duble = 0;
	while (first_duble <= first_limit)
	{
		second_duble = first_duble + 1;
		while (second_duble <= second_limit)
		{
			ft_write_duble(first_duble);
			write(1, " ", 1);
			ft_write_duble(second_duble);
			if (!(first_duble == first_limit && second_duble == second_limit))
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			second_duble++;
		}
		first_duble++;
	}
}
