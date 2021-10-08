
static int itoa_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len += 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = itoa_len(n);
	str = (char*)malloc(sizeof(char) * (len + 1))
	if (!str)
		return (NULL);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[11] = "-2147483648";
		}
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		str[len - 1] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (str);
}
