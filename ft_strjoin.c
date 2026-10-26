/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:01:08 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 17:35:58 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = s1_len;
	j = 0;
	dest = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	dest = (char *)ft_memcpy(dest, s1, s1_len);
	while (j < s2_len)
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
