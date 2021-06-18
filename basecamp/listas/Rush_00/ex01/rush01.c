void	ft_putchar(char c);

void	mk_special_line(int line_lenght, char start, char in_between, char end)
{
	int		position;

	position = 1;
	while (position <= line_lenght)
	{
		if (position == 1)
			ft_putchar(start);
		else if (position == line_lenght)
			ft_putchar(end);
		else
			ft_putchar(in_between);
		position++;
	}
}

void	mk_common_line(int line_lenght, char side, char center)
{
	int		position;

	position = 1;
	while (position <= line_lenght)
	{
		if (position == 1 || position == line_lenght)
			ft_putchar(side);
		else
			ft_putchar(center);
		position++;
	}
}

void	mk_rectangle(int rec_width, int rec_height)
{
	int		line;

	line = 1;
	while (line <= rec_height)
	{
		if (line == 1)
			mk_special_line (rec_width, '/', '*', '\\');
		else if (line == rec_height)
			mk_special_line (rec_width, '\\', '*', '/');
		else
			mk_common_line (rec_width, '*', ' ');
		line++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	mk_rectangle (x, y);
}
