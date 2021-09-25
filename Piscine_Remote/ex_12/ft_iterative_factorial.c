/* Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.
If there’s an error, the function should return 0
*/
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	
	i = nb - 1;
    if (nb < 0 || nb > 12)
    {
        return 0;
    }
	else if (nb > 1)
	{
		while (i > 0) 
		{
			nb *= i;
			i--;
		}
		return nb;
	}
    else if (nb == 0 || nb == 1);
    {
       return 1;
    }
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
