/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:54:45 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 14:56:44 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*h_search;

	i = 0;
	needle_len = 0;
	while (*needle++)
		needle_len++;
	h_search = (char *)haystack;
	if (needle_len == 0 || haystack == needle)
		return (h_search);
	while (h_search[i] && i < len)
	{
		j = 0;
		while (h_search[i + j] && needle[j] && (h_search[i + j] == needle[j]) && i + j < len)
			j++;
		if (j == needle_len)
			return (h_search + i);
		i++;
	}
	return (NULL);
}