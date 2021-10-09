/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:53:48 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:35:53 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;
	size_t	len;

	i = 0;
	count = 0;
	len = 0;
	while(*src++)
		len++;
	if (dstsize == 0)
		return (len);
	if (!dst || !src)
		return (0);
	while (src[count] != '\0')
		count++;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
		
	dst[i] = '\0';
	return (count);
}
