/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 21:16:56 by phella            #+#    #+#             */
/*   Updated: 2021/06/30 11:27:13 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	g;

	f = 1;
	g = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (g < nb)
		{
			g++;
			f = f * g;
		}
		return (f);
	}
	else
		return (0);
}
