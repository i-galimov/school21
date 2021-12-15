/* Reproduce the behavior of the function strdup (man strdup) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
  int i, len;
  char *copy;
  
  len = 0;
  i = 0;
  while (*src)
    len++;
  copy = (char*)malloc(sizeof(char) * (len + 1));
  if (copy == NULL)
    return (NULL);
   while (src[i])
   {
   	copy[i] = src[i];
   	i++;
   }
   copy[i] = '\0';
   return (copy);
  
}

int main(void)
{
	char * a;
	char * b;
	char * c;
	char * d;
	char hi[3] = "Hi";
	char hello[12] = "Hello World";
	a = ft_strdup(hello);
	b = ft_strdup(hi);
	c = strdup(hello);
	d = strdup(hi);
	printf("%s, %s, %s, %s", a, b, c, d);
    return (0);
}
