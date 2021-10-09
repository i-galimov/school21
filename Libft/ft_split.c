/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:50:24 by phella            #+#    #+#             */
/*   Updated: 2021/10/09 19:16:24 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_string_len(const	char *m)
{
	size_t	l;

	l = 0;
	while(*m++)
		l++;
	return (l);
}
static int ft_count_words(const char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*str == c)
			count = 0;
		str++;
	}
	return (i);
}

static char *ft_word_dup(const char *str, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	free(word);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		i_start;
	char	**split;
	int		len;

	len = ft_count_words(s, c);
    i = 0;
	j = 0;
	i_start = -1;
	split = (char **)malloc(sizeof(char) * (len + 1));
    if (!s || !split)
    	return (NULL);
	while (i <= ft_string_len(s))
	{
		if (s[i] != c && i_start < 0)
			i_start = i;
		else if ((s[i] == c || i == ft_string_len(s)) && i_start >= 0)
		{
			split[j++] = ft_word_dup(s, i_start, i);
			i_start = -1;
		}
		i++;
	}
    free(split);
	return (split);
}