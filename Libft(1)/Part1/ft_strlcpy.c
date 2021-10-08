#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	while (src[count] != '\0')
		count++;
	while (src[i] != '\0' && i < dstsize - 1)
		dst[i++] = src[i++];
	dst[i] = '\0';
	return (count);
}
