char	*ft_strrchr(const char *s, int c)
{
	int len;
	
	len = 0;
	if (!s)
		return (NULL);
    while (*s)
    {
    	*s++;
    	len++;
    }
	
	while (len)
	{
		if (s[len - 1] == c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
