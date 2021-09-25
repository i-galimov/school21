// Create a function that swaps the value of two integers whose addresses are entered
as parameters.

void ft_swap(int *a, int *b)
{
	int save;
	
	save = *a;
	*a = *b;
	*b = save;
}
