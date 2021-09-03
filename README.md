# Проекты для School 21

### Бассейн

* [**Shell 00**](https://github.com/i-galimov/school21/tree/main/Shell_00)
* [**Shell 01**](https://github.com/i-galimov/school21/tree/main/Shell_01)
* [**C Piscine 05**](https://github.com/i-galimov/school21/tree/main/c05)

### Пример кода
`
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_revprint(char *str)
{
	int	count;
	
	count = ft_strlen(str);
	while(count > 0)
	{
		write(1, &str[count - 1], 1);
		count--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_revprint(argv[1]);
}`

> ***Корабль не тонет, когда он в воде, он тонет, когда вода в нём.***
