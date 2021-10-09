/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:52:16 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 15:37:29 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *src)
{
  int i; 
  int len;
  char *copy;
  
  len = 0;
  i = 0;
  while (*src)
    len++;
  copy = (char*)malloc(sizeof(char) * (len + 1));
  if (copy == NULL)
    return (NULL);
   while (src[i])
   {
   	copy[i] = src[i];
   	i++;
   }
   copy[i] = '\0';
   return (copy);
}