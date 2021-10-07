#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char	*sub_s;
	
	i = 0;
	sub_s = (char*)malloc(sizeof(*s) * (len + 1));
	if (!sub_s)
		return (NULL);
	while (len-- && s[start])
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}
