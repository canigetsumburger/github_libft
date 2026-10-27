/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 13:57:56 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/26 16:42:08 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0)
		i++;
	while (ft_strrchr(set, s1[s_len - 1]) != 0)
		s_len--;
	trimmed = (char *)ft_calloc(s_len - i, sizeof(char));
	trimmed = (char *)ft_memcpy(trimmed, &s1[i], s_len - i);
	return (trimmed);
}
