/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 15:58:00 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 20:08:16 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dupe;
	char	*dst;

	i = 0;
	s_len = ft_strlen(s);
	dst = (char *)ft_memset((void *)s, 0, len);
	dupe = (char *)ft_calloc(len + 1, sizeof (char));
	while (i < s_len)
	{
		if (i == start && s[i])
		{
			dupe = (char *)ft_memcpy(dst, &s[i], len);
			dupe[len] = '\0';
			return (dupe);
		}
		i++;
	}
	dupe[len] = '\0';
	return (dupe);
}
