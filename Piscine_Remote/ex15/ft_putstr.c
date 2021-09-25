/* Create a function that displays a string of characters on the standard output
*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
	ft_putchar(10);
}

int main(void)
{
  ft_putstr("Hello, World");
  ft_putstr("Hi");
  return (0);
}
