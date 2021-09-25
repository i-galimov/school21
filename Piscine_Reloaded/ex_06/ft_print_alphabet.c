/* Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’. */

# include <unistd.h>

void ft_print_alphabet(void) 
{
	char i;
	
	i = 97;
	while (i <= 122) 
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(void) 
{
	ft_print_alphabet();
	return 0;
}
