#include <stdlib.h>

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
