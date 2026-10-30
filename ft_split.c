/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:21:09 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/26 18:50:24 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	flag;

	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i - 1] == c && i > 0) || i == 0))
			flag++;
		i++;
	}
	return (flag);
}

size_t	end_calc(char const *s, char c)
{
	size_t	j;

	j = 0;
	while (s[j] != c && s[j])
		j++;
	return (j);
}

char	**splitter(char **array, const char *s, size_t words_amount, char c)
{
	size_t	i;
	size_t	word_start;
	size_t	word_end;

	i = 0;
	word_start = 0;
	word_end = 0;
	while (i < words_amount)
	{
		while (s[word_start] == c && s[word_start])
			word_start++;
		word_end = end_calc(&s[word_start], c);
		array[i] = ft_substr(&s[word_start], 0, word_end);
		if (!array[i])
		{
			while (i  >= 0)
			{
				free(array[i]);
				if (i == 0)
					break ;
				i--;
			}
			free(array);
			return (NULL);
		}
		word_start = word_start + word_end;
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words_amount;

	if (!s)
		return (NULL);
	words_amount = word_count(s, c);
	array = (char **)ft_calloc(words_amount + 1, sizeof(char *));
	array = splitter(array, s, words_amount, c);
	if (!array)
		return (NULL);
	return (array);
}
