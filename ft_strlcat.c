/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:40:03 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 19:01:46 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cat_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cat_len = ft_strlcpy(&dst[dst_len], src, src_len);
	return (cat_len);
}
