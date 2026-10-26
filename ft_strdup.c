/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:45:15 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/26 18:53:15 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dupe;
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	dupe = ft_calloc(srclen + 1, sizeof (char));
	if (!dupe)
		return (NULL);
	dupe = (char *)ft_memcpy(dupe, src, srclen);
	return (dupe);
}
