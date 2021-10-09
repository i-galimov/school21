/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:03 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 16:28:57 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	str = (char*)malloc(sizeof(char) * (len + 1));
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
			return("-2147483648");
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