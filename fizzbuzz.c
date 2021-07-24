/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------
Напишите программу, которая печатает числа от 1 до 100, разделенные символом новой строки.
Если число кратно 3, вместо этого печатается «fizz».
Если число кратно 5, вместо этого выводится «жужжание».
Если число одновременно кратно 3 и кратно 5, вместо этого выводится «fizzbuzz».
Пример:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> */

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
