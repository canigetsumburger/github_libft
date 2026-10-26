/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:14:53 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 17:38:11 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t n)
{
	size_t	i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while ((destination[i] || source[i]) && i < n)
	{
		if (destination[i] != source[i])
			return (destination[i] - source[i]);
		i++;
	}
	return (0);
}
