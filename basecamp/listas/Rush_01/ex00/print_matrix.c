void	ft_putchar (char c);
void	ft_printf (char *string);

void	print_line (char *line)
{
	ft_printf (line);
	ft_putchar ('\n');
}

void	print_matrix (char **matrix)
{
	while (*matrix)
	{
		print_line (*matrix);
		matrix++;
	}
}

int	size_of_matrix (char *matrix)
{
	int	size;

	size = 0;
	while (*matrix)
	{
		matrix++;
		if (*matrix != ' ')
			size++;
	}
	return (size / 4);
}
