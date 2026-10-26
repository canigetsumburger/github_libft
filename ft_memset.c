/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:01:05 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 16:57:08 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*pointer;
	unsigned char	value;

	i = 0;
	pointer = (unsigned char *)str;
	value = (unsigned char)c;
	while (i < n)
	{
		pointer[i] = value;
		i++;
	}
	return (pointer);
}
