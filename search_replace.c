#include <unistd.h>

int	main(int argc, char **argv)
{
	(void) *argv;
	int	i;
	int	no_ch;
	int	j;
	
	no_ch = 0;
	i = 0;
	j = 0;
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (argv[1][i])
		{
			if (argv[1][i] != argv[2][0])
			{
				i++;
				no_ch++;
			}
			else
			{
				argv[1][i] = argv[3][0];
				i++;
			}
		}
		if (no_ch == i)
			write(1, "\n", 1);
		else
			while(i)
			{
				write(1, &argv[1][j], 1);
				j++;
				i--;
			}
	}
	else 
		write(1, "\n", 1);
	return (0);
}
