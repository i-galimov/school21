#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	
	index = 0;
	if (!s)
		return (NULL);
    while (s[index] != '\0')
    	index++;
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)s + index);
		index--;
	}
	if (c == '\0')
		return ((char *)s + index + 1);
	return (NULL);
}

int main(void)
{
	const char * vv;
	vv = ft_strrchr("Hello world", 111);
	printf("%p\n", vv);
	const char * test;
	test = strrchr("Hello world", 111);
	printf("%p\n\n", test);
	
	const char * vv2;
	vv2 = ft_strrchr("Hello world", 122);
	printf("%p\n", vv2);
	const char * test2;
	test2 = strrchr("Hello world", 122);
	printf("%p\n\n", test2);
	
	const char * vv3;
	vv3 = ft_strrchr(NULL, 111);
	printf("%p\n\n", vv3);
	
	const char * vv4;
	vv4 = ft_strrchr("Hello world", 72);
	printf("%p\n", vv4);
	const char * test4;
	test4 = strrchr("Hello world", 72);
	printf("%p\n\n", test4);
	
	const char * vv5;
	vv5 = ft_strrchr("Hello world", 0);
	printf("%p\n", vv5);
	const char * test5;
	test5 = strrchr("Hello world", 0);
	printf("%p\n", test5);
}
