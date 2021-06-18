unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size < 1)
		return (src_length + size);
	counter = 0;
	while (src[counter] && (dest_length + counter) < size - 1)
	{
		dest[dest_length + counter] = src[counter];
		counter++;
	}
	dest[dest_length + counter] = '\0';
	if (size < dest_length)
		return (src_length + size);
	else
		return (dest_length + src_length);
}
