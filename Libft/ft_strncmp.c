/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:54:38 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 16:07:52 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int len_s1;
	int len_s2;
        int i;
	
	len_s1 = 0;
	len_s2 = 0;
	i = 0;
	while(*s1++)
	    len_s1++;
	while(*s2++)
		len_s2++;

	if (len_s1 == len_s2)
	{
	  while (n > 0)
	  {
		  if (s1[i] == s2[i])
		  {
		        i++; 
		        n--;
		  }
		  else
		      return (s1[i] - s2[i]);
	   }
	}
return (len_s1 - len_s2);
}