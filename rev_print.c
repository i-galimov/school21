#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_revprint(char *str)
{
	int	count;
	
	count = ft_strlen(str);
	while(count > 0)
	{
		write(1, &str[count - 1], 1);
		count--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_revprint(argv[1]);
}
