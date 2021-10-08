#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void*)malloc(count * size);
	if (!str)
		return (NULL);
	while (count--)
		*str++ = 0;
	return (str);
}
