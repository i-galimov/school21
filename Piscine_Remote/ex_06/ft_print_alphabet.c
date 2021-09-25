# include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_alphabet(void) 
{
	char i;
        char n;
	
	i = 97;
        n = 10;
	while (i <= 122) 
	{
		ft_putchar(i++);
	}
	ft_putchar(n);
}

int main(void) 
{
	ft_print_alphabet();
	return 0;
}
