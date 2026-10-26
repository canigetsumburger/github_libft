/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:20:18 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/20 19:57:25 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pointer;
	unsigned char	*value;

	i = 0;
	pointer = (unsigned char *)dest;
	value = (unsigned char *)src;
	while (i < n)
	{
		if (pointer[i] != value[i])
			return (pointer[i] - value[i]);
		i++;
	}
	return (0);
}
