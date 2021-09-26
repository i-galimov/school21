// Reproduce the behavior of the function strcmp (man strcmp)

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int count, count2, i;
	
	count = 0;
	count2 = 0;
	i = 0;
	while (*s1++)
		count++;
	while (*s2++)
		count2++;
	if (count > count2)
	  return (1);
	else if (count < count2)
	  return (-1);
	while (s1[i] != '\0' && s1[i] == s2[i])
	  i++;
	if (s1[i] > s2[i])
	  return (1);
	else if (s1[i] < s2[i])
	  return (-1);
	else
	  return (0);
}

int main(void)
{
	int a, b, c, d, e, f;
	a = ft_strcmp("Hello, World", "Abcd");
	b = ft_strcmp("Hi", "Hi");
	c = ft_strcmp("Aa", "Ab");
	d = strcmp("Hello, World", "Abcd");
	e = strcmp("Hi", "Hi");
	f = strcmp("Aa", "Ab");
	printf("%d, %d, %d, %d, %d, %d", a, b, c, d, e, f);
    return (0);
}
