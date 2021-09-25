// Reproduce the behavior of the function strlen (man strlen)

#include <stdio.h>

int ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while(*str)
	{
		*str++;
		count++;
	}
	return (count);
}

int main(void)
{
	int a, b;
	a = ft_strlen("Hello, World");
	b = ft_strlen("Hi");
	printf("%d, %d", a, b);
    return (0);
}
