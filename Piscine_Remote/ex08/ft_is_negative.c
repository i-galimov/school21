/* Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’. */

# include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_is_negative(int n) 
{
	char p;
    char o;
    char perenos;
	
	p = 80;
    o = 78;
    perenos = 10;
	if (n < 0) 
	{
		ft_putchar(o);
	}
	else
	{
	ft_putchar(p);
	}
	ft_putchar(perenos);
	
}

int main(void) 
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2147483648 + 1);  //переполнение
	return 0;
}
