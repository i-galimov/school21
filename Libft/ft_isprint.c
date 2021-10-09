/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:45:47 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 15:23:10 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint (int arg)
{
	if (arg >= 32 && arg <= 126)
	{
		return (1);
	}
	return (0);
}