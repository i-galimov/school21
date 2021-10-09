/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:44 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:37:21 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char * src_p;
	char * dst_p;
    
    if (!dst)
		return (NULL);
    src_p = (char*)src;
    dst_p = (char*)dst;
    if (dst_p < src_p)
    {
       while (n--)
           *src_p++ = *dst_p++;
    }
    else if (dst_p > src_p)
    {
        while (n--)
            src_p[n-1] = dst_p[n-1];
    }
    return (dst);
}