/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:33 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:31:57 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char * src_p;
	char * dst_p;
    
    if (!dst)
		return (NULL);
	src_p = (char*)src;
	dst_p = (char*)dst;
	while (n--)
		*dst_p++ = *src_p++;
	return (dst);
}