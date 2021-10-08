void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_search;
	size_t			i;

	i = 0;
	s_search = (unsigned char *)s;
	while (n--)
	{
		if (s_search[i] == (unsigned char)c)
			return (s_search + i);
		i++;
	}
	return (NULL);
}
