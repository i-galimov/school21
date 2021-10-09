/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:54:27 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 18:46:24 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	char	*str;
	int		i;

    i = 0;
    while(*s++)
    	i++;
	if (s && f)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
