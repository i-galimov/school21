/* Create a function that returns the square root of a number (if it exists), or 0 if the
square root is an irrational number.
*/

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i, max;
	
	i = 1;
	max = nb / 2;
	
	if (nb == 1 || nb == 0)
	{
		return (nb);
	}
	else if (nb < 1 || nb > 2147483647)
	{
		return (0);
	}
	while (i * i < nb && i <= max)
	{
		i++;
		if (i * i == nb)
		{
		return (i);
		}
	}
	return (0);
}

int main(void)
{
	int a, b, c, d, e;
	a = ft_sqrt(-1);
	b = ft_sqrt(0);
	c = ft_sqrt(1);
	d = ft_sqrt(9);
	e = ft_sqrt(1600080001);
	printf("%d, %d, %d, %d, %d", a, b, c, d, e);
}
