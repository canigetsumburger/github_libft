/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:04:28 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 19:27:00 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	size;
	char	*pointer;

	i = 0;
	size = ft_strlen(str);
	if (c == '\0')
		return ((char *)&str[size]);
	pointer = ft_memchr(str, c, size);
	return (pointer);
}
