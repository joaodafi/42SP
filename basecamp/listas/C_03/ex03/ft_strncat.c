char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	while (dest[c1])
		c1++;
	c2 = 0;
	while (src[c2] && c2 < nb)
	{
		dest[c1 + c2] = src[c2];
		c2++;
	}
	dest[c1 + c2] = '\0';
	return (dest);
}
