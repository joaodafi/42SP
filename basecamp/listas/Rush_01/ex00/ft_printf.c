void	ft_putchar (char c);

void	ft_printf (char *string)
{
	while (*string)
	{
		ft_putchar (*string);
		string++;
	}
}
