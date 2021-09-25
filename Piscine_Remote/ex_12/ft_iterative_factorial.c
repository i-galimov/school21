/* Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
If there’s an error, the function should return 0
*/
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	i = nb - 1;
	if (nb > 0)
	{
		while (i > 0) 
		{
			nb *= i;
			i--;
		}
	}
	else
	{
		nb = 0;
	}
	return nb;
}

int main(void)
{
	int a, b, c, d, e;
	a = ft_iterative_factorial(-1);
	b = ft_iterative_factorial(0);
	c = ft_iterative_factorial(1);
	d = ft_iterative_factorial(3);
	e = ft_iterative_factorial(10);
	printf("%d, %d, %d, %d, %d", a, b, c, d, e);
}
