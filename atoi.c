#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int cp;
	int	minus;

	i = 0;
	minus = 0;

	while (str[i])
	{	
		if (str[i] == 45)
		{	
			minus++;
			i++;
		}
		else if (str[i] > 47 && str[i] < 58)
		{	
			cp = cp * 10 + str[i] - '0';
			i++;
		}			
		else 
			i++;
	}
	if (minus % 2 == 1)
		cp = -cp; 
	return (cp);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  kjh-123007450dfgfeh2"));
}
