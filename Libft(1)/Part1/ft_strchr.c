char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i++] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
