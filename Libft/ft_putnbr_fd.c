/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:47:40 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 14:47:52 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char num;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			num = n + '0';
			write(fd, &num, 1);
		}
		else if (n > 10)
		{
			ft_putnbr_fd(n / 10, fd);
			num = (n % 10) + '0';
			write(fd, &num, 1);
		}
	}
}