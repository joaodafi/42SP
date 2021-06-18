char	*ft_strcat(char *dest, char *src)
{
	int		c1;
	int		c2;

	c1 = 0;
	while (dest[c1])
		c1++;
	c2 = 0;
	while (src[c2])
	{
		dest[c1 + c2] = src[c2];
		c2++;
	}
	dest[c1 + c2] = '\0';
	return (dest);
}
