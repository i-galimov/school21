#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char*)b;
	while (*str)
		*str++ = (unsigned char)c;
	return (b);
}
