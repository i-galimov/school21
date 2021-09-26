/* Create a function ft_range which returns an array ofints. This int array should
contain all values between min and max.
Min included - max excluded. */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int len, i;
  int * array;
  if (min >= max)
    return (0);
  len = max - min;
  
  len = 0;
  i = 0;
  array = (int*)malloc(sizeof(int) * (len));
  if (array == NULL)
    return (NULL);
  while (len--)
  {
  	array[i] = min + i;
  	i++;
  }
  return (array);
}
  

int main(void)
{
    printf("%d", ft_range(2, 5));
    return (0);
}
