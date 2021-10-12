#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)s + i);
	return (NULL);
}

int main(void)
{
	const char * vv;
	vv = ft_strchr("Hello world", 111);
	printf("%p\n", vv);
	const char * test;
	test = strchr("Hello world", 111);
	printf("%p\n\n", test);
	
	const char * vv2;
	vv2 = ft_strchr("Hello world", 122);
	printf("%p\n", vv2);
	const char * test2;
	test2 = strchr("Hello world", 122);
	printf("%p\n\n", test2);
	
	const char * vv3;
	vv3 = ft_strchr(NULL, 111);
	printf("%p\n\n", vv3);
	
	const char * vv4;
	vv4 = ft_strchr("Hello world", 72);
	printf("%p\n", vv4);
	const char * test4;
	test4 = strchr("Hello world", 72);
	printf("%p\n\n", test4);
	
	const char * vv5;
	vv5 = ft_strchr("Hello world", 0);
	printf("%p\n", vv5);
	const char * test5;
	test5 = strchr("Hello world", 0);
	printf("%p\n", test5);
}
