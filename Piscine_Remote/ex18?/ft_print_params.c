/* We’re dealing with a program here, you should therefore have a function main in
your .c file.
Create a program that displays its given arguments */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i, j;
	char n;
	
	i = 1;
	j = 0;
	n = '\n';
	if (argc > 1)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar(n);
		i++;
	}
	return (0);
}
