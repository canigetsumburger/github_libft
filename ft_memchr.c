/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:14:08 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 16:59:11 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*pointer;
	unsigned char		value;

	i = 0;
	pointer = (unsigned char *)str;
	value = (unsigned char)c;
	while (i < n)
	{
		if (pointer[i] == value)
			return (&pointer[i]);
		i++;
	}
	return (NULL);
}
