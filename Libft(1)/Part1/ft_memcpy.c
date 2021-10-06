#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char * src_p;
	char * dst_p;
    
    if (!dst)
		return (NULL);
	src_p = (char*)src;
	dst_p = (char*)dst;
	while (*dst)
		*dst_p++ = *src_p++;
	return (dst);
}