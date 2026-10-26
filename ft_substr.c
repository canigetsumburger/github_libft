/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:58:00 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/26 19:00:58 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dupe;

	i = 0;
	s_len = ft_strlen(s);
	dupe = (char *)ft_calloc(len + 1, sizeof (char));
	if (!dupe)
		return (NULL);
	while (i < s_len)
	{
		if (i == start && s[i])
		{
			ft_memcpy(dupe, &s[i], len);
			dupe[len] = '\0';
			return (dupe);
		}
		i++;
	}
	return (dupe);
}
