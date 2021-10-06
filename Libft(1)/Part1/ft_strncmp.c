#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int len_s1;
	int len_s2;
        int i;
	
	len_s1 = 0;
	len_s2 = 0;
	i = 0;
	while(*s1)
	{
	    *s1++;
	    len_s1++;
	}
	while(*s2)
	{
		*s1++;
		len_s2++;
	}
	if (len_s1 == len_s2)
	{
	  while (n > 0)
	  {
		  if (s1[i] == s2[i])
		  {
		        i++; 
		        n--;
		  }
		  else
		      return (s1[i] - s2[i]);
	   }
	}
	else
	    return (len_s1 - len_s2);
}
