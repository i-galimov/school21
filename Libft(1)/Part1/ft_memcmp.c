int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_search;
	unsigned char	*s2_search;

	i = 0;
	s1_search = (unsigned char*)s1;
	s2_search = (unsigned char*)s2;
	while (i++ < n)
	{
		if (s1_search[i] != s2_search[i])
			return (s1_search[i] - s2_search[i]);
	}
	return (0);
}
