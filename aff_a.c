#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)	*argv;
	char	a;
	int		i;
	char	n;

	a = 'a';
	i = 0;
	n = '\n';
	if (argc != 2)
		write(1, &a, 1);
   	else 
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, &a, 1);
				write(1, &n, 1);
				return (0);
			}
			else
				i++;
		}
		write(1, &n, 1);
}
