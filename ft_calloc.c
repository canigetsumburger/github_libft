/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:23:20 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/24 17:01:29 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	void	*empty;
	size_t	mult;

	mult = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		empty = malloc(0);
		return (empty);
	}
	if (mult / nmemb != size)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer)
		ft_bzero(pointer, (nmemb * size));
	return (pointer);
}
