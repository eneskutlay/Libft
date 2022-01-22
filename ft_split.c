/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:49:36 by ekutlay           #+#    #+#             */
/*   Updated: 2022/01/22 02:23:14 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trig;

	i = 0;
	trig = 0;
	while (*str)
	{
		if (*str != c && trig == 0)
		{
			trig = 1;
			i++;
		}
		else if (*str == c)
			trig = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int fin)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((fin - start + 1) * sizeof(char));
	while (start < fin)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
