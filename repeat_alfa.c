#include <unistd.h>

int	ft_count(char c)
{
	int	count;

	if (c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	else
		count = 1;
	return (count);
}

int	main(int argc, char **argv)
{
	(void) *argv;
	int	count;
	int	i;

	i = 0;
	if (argc == 2)
	{	
		while (argv[1][i] != '\0')
		{
			count = ft_count(argv[1][i]);
			while (count > 0)
			{	
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
