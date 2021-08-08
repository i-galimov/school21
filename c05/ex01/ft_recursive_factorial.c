/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:14:50 by phella            #+#    #+#             */
/*   Updated: 2021/06/30 11:29:18 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	if (nb > 0)
	{
		a = ft_recursive_factorial(nb - 1) * nb;
		return (a);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
