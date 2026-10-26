/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:53:48 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/22 19:57:06 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && (i + j < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&(str[i]));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
