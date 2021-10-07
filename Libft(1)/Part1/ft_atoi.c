int		ft_atoi(const char *s)
{
	int		neg;
	long	num;

	num = 0;
	neg = 1;
	while (*s == ' ' || *s == '\f' || *s == '\n' ||
		*s == '\r' || *s == '\t' || *s == '\v' || *s == '+')
		*s++;
	if (*s == '-')
	{
		neg *= -1;
		*s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + *s - '0';
		*s++;
	}
	return (neg * (int)num);
}
