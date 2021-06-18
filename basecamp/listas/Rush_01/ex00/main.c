#include <stdlib.h>
void	ft_putchar (char c);
void	ft_printf (char *string);
int		size_of_matrix (char *matrix);

int	check_valid_matrix (int size, char *matrix)
{
	while (*(matrix + 4 * 2))
	{
		if (*matrix == ' ')
		{
			matrix++;
			continue ;
		}
		if (*matrix - '0' + (*(matrix + 4 * 2) - '0') > size + 1)
			return (1);
		matrix++;
	}
	return (0);
}

int	*char_vector_to_matrix (char *vector)
{
	int	size;
	int	*matrix;
	int	*p;

	size = size_of_matrix(vector);
	matrix = (int *)malloc (4 * size * size);
	p = matrix;
	while (*vector)
	{
		if (*vector == ' ')
		{
			vector++;
			continue ;
		}
		*p = *vector - '0';
		p++;
		vector++;
	}
	return (matrix);
}

/*


"col1up col2up col3up col4up col1down col2down col3down col4down
row1left row2left row3left row4left row1right row2right row3right row4right"

number + '0' cria char
number_char - '0' cria int

print_line(*argv);

ft_putchar (*matrix - '0' + (*(matrix + 4 * 2) - '0') + '0');
ft_putchar (*matrix);
*/
int	main (int argc, char **argv)
{
	int	size;
	int	*matrix;

	if (argc > 1)
	{
		++argv;
		size = size_of_matrix(*argv);
		if (check_valid_matrix (size, *argv))
		{
			ft_printf ("Error\n");
			return (1);
		}
		matrix = char_vector_to_matrix(*argv);
		while (*matrix)
		{
			ft_putchar(*matrix + '0');
			ft_putchar(' ');
			matrix++;
		}
	}
	return (0);
}
