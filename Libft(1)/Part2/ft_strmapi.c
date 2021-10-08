#include <stdlib.h>

char *ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	char	*str;
	int		i;

    i = 0;
    while(*s)
    {
    	i++;
    	*s++;
    }
	if (s && f)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
