/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:56:59 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:39:29 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;
	
	len = 0;
	if (!s)
		return (NULL);
    while (*s++)
    	len++;
	while (len)
	{
		if (s[len - 1] == c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}