/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:25:32 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/23 18:35:49 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	j = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (n == 0 || s1 == s2)
		return (s1);
	if (dest < src)
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			s1[i] = s2[i];
		}
	}
	return (s1);
}
