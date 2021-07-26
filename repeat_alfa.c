/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------
Напишите программу с именем repeat_alpha, которая берет строку и отображает ее,
повторяя каждый алфавитный символ столько раз, сколько его алфавитный указатель, 
за которым следует новая строка.
'a' становится 'a', 'b' становится 'bb', 'e' становится 'eeeee', и так далее...
Если количество аргументов не равно 1, просто отобразите новую строку.
Примеры:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */


#include <unistd.h>

int	ft_count(char c)
{
	int	count;

	if (c >= 'A' && c <= 'Z')
		count = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		count = c - 'a' + 1;
	else
		count = 1;
	return (count);
}

int	main(int argc, char **argv)
{
	(void) *argv;
	int	count;
	int	i;

	i = 0;
	if (argc == 2)
	{	
		while (argv[1][i] != '\0')
		{
			count = ft_count(argv[1][i]);
			while (count > 0)
			{	
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
