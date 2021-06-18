unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size != 0)
	{
		while ((counter < size - 1) && (src[counter]))
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (counter);
}
