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

size_t	special_len(char const *s, char c)
{
	size_t	j;

	j = 0;
	while (s[j] != c)
		j++;
	return (j);
}

size_t	ft_sep_amount(char const *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	sep_amount;
	size_t	new_start;

	i = 0;
	j = 0;
	sep_amount = ft_sep_amount(s, c);
	array = (char **)ft_calloc(sep_amount, sizeof(char *));
	if (!array)
		return (NULL);
	while (i <= sep_amount)
	{
		new_start = j;
		j = special_len(&s[new_start], c);
		array[i] = ft_substr(s, new_start, j);
		if (!array[i])
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}
	return (array);
}
