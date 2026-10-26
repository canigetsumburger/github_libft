/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:15:50 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/23 17:13:01 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;
	char	value;

	i = ft_strlen(s);
	pointer = (char *)s;
	value = (char)c;
	while (i >= 0)
	{
		if (pointer[i] == value)
			return (&pointer[i]);
		i--;
	}
	return (NULL);
}
