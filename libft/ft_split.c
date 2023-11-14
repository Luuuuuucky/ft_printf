/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:56:54 by pameyer           #+#    #+#             */
/*   Updated: 2023/10/19 12:32:23 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	ctr;
	size_t	last;

	i = -1;
	ctr = 0;
	last = 1;
	while (s[++i])
	{
		if (last && s[i] != c)
		{
			last = 0;
			ctr++;
		}
		else if (!last && s[i] == c)
			last = 1;
	}
	return (ctr);
}

char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	split = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!s || !split)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while ((size_t)++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = (int) i;
		else if ((s[i] == c || (size_t) i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, (int) i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
