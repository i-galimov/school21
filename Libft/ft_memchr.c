/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:14 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 14:46:17 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_search;
	size_t			i;

	i = 0;
	s_search = (unsigned char *)s;
	while (n--)
	{
		if (s_search[i] == (unsigned char)c)
			return (s_search + i);
		i++;
	}
	return (NULL);
}
