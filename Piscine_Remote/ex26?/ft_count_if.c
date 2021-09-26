/* Create a function ft_count_if which will return the number of elements of the
array that return 1, passed to the function f. */

int ft_count_if(char **tab, int(*f)(char*))
{
	int count;
	int i;
	
	i = 0;
	count = 0;
	while(tab[i])
	{
		if (f(tab[i]) == 1)
		  count++;
		i++;
	}
	return (count);
}
