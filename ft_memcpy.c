/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:02:22 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/20 20:00:17 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pointer;
	unsigned char	*value;

	i = 0;
	pointer = (unsigned char *)dest;
	value = (unsigned char *)src;
	while (i < n)
	{
		pointer[i] = value[i];
		i++;
	}
	return (pointer);
}
