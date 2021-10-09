/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:23 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 14:46:25 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_search;
	unsigned char	*s2_search;

	i = 0;
	s1_search = (unsigned char*)s1;
	s2_search = (unsigned char*)s2;
	while (i++ < n)
	{
		if (s1_search[i] != s2_search[i])
			return (s1_search[i] - s2_search[i]);
	}
	return (0);
}