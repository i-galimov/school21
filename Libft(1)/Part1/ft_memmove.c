#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char * src_p;
	char * dst_p;
    
    if (!dst)
		return (NULL);
    src_p = (char*)src;
    dst_p = (char*)dst;
    if (dst_p < src_p)
    {
       while (n--)
           *src_p++ = dst_p++;
    }
    else if (dst_p > src_p)
    {
        while (n--)
            src_p[n-1] = dst_p[n-1];
    }
    return (dest);
}
