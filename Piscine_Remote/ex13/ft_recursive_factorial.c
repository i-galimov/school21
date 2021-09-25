/* Create a recursive function that returns the factorial of the number given as a
parameter.
If there’s an error, the function should return 0
*/
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    int factorial;
	
    if (nb < 0 || nb > 12) // на случай переполнения
    {
        return (0);
    }
    else if (nb == 0)
    {
    	return (1);
    }
    else if (nb >= 1)
    {
    factorial = nb * ft_recursive_factorial(nb - 1);
    }
	return (factorial);
}

int main(void)
{
	int a, b, c, d, e;
	a = ft_recursive_factorial(-1);
	b = ft_recursive_factorial(0);
	c = ft_recursive_factorial(1);
	d = ft_recursive_factorial(3);
	e = ft_recursive_factorial(10);
	printf("%d, %d, %d, %d, %d", a, b, c, d, e);
}
