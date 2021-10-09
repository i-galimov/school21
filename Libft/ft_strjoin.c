/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:53:25 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:46:02 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len_s1;
	int		len_s2;
	int i;
	int j;
	
	len_s1 = 0;
	len_s2 = 0;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	while(*s1++)
		len_s1++;
	while(*s2++)
		len_s2++;
	res = (char *)malloc(len_s1 + len_s2 + 1);
	if (res == NULL)
		return (NULL);
	while(s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while(s2[j])
		res[i++] = s2[j++];
        res[++i] = '\0';
	return (res);
}