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
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int	i_start;
	char	**split;

        i = 0;
	j = 0;
	i_start = -1;
	split = malloc(ft_count_words(s, c) + 1) * sizeof(char *));
        if (!s || !split)
            return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && i_start < 0)
			i_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && i_start >= 0)
		{
			split[j++] = ft_word_dup(s, i_start, i);
			i_start = -1;
		}
		i++;
	}
	split[j] = '\0';
        free(word);
	return (split);
}
