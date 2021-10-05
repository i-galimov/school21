#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;
	char endl;
	
	i = 0;
	endl = '\n';
	while(s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &endl, 1)
}
