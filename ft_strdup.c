/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:45:15 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 19:25:17 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	char	*dupe;
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	dst = (char *)src;
	dupe = ft_calloc(srclen + 1, sizeof (char));
	if (!dst)
		return (NULL);
	dupe = (char *)ft_memcpy(dst, src, srclen);
	dupe[i] = '\0';
	return (dst);
}
