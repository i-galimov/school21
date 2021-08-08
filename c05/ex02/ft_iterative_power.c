/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:17:59 by phella            #+#    #+#             */
/*   Updated: 2021/06/30 16:01:00 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;
	
	a = nb;
	if (power == 0)
		return (1);
	else if (power < 1 && power != 0)
		return (0);
	else if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * a;
			power--;
		}
		return (nb);
	}
	else if (power == 1)
		return (nb);
	else
		return (0);
}
