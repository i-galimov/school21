#include <unistd.h>

void ft_makechar(int a)
{
	char b;
	
	if (a <= 9)
	{
		b = a + '0';
		write(1, &b, 1);
		write(1, "\n", 1);
	}
	else if (a >= 10 && a < 100)
	{
		b = a / 10 + '0';
		write(1, &b, 1);
		b = a % 10 + '0';
		write(1, &b, 1);
		write(1, "\n", 1);
	}
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
		   write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
			ft_makechar(i);
		i++;
	}
}
