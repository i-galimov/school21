#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*res;
	size_t		len_dst;
	size_t		len_src;
	int i;
	int j;
	
	len_dst = 0;
	len_src = 0;
	i = 0;
	j = 0;
	res = NULL;
	if (!dst || !src)
		return (NULL);
	while(*dst++)
		len_dst++;
	while(*src++)
		len_src++;
	if (size == 0)
		return (len_dst + len_src);
	if (size < len_dst)
		len_src += size;
	else
		len_src += len_dst;
	if (size >= len_src)
	{
	    while(dst[i] && src[j])
		    res[i++] = dst[i++];
	    while(src[j])
		    res[i++] = src[j++];
	}
	 res[++i] = '\0';
	 return (len_src);
}
