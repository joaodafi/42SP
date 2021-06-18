void	ft_putchar(char c);

void	mk_common_line(int line_lenght, char tips, char in_between)
{
	int		position;

	position = 1;
	while (position <= line_lenght)
	{
		if (position == 1 || position == line_lenght)
			ft_putchar(tips+1);
		else
			ft_putchar(in_between);
		position++;
	}
}

void	mk_rectangle(int rec_width, int rec_height)
{
	int		line;

	line = 1;
	while (line <= rec_height)
	{
		if (line == 1 || line == rec_height)
			mk_common_line (rec_width, 'o', '-');
		else
			mk_common_line (rec_width, '|', ' ');
		line++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	mk_rectangle (x, y);
}
