#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{	
			if (argv[1][i] >= 0 && argv[1][i] <= 32)
				i++;
			else
			{
				write(1, &argv[1][i], 1);
				i++;
				if (argv[1][i] >= 0 && argv[1][i] <= 32)
				{
					write (1, "\n", 1);
					return (0);
				}
			}
		}		
	}
		
	
	return (0);
}
