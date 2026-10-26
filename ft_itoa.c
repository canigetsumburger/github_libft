/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebakal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:17:54 by kebakal           #+#    #+#             */
/*   Updated: 2026/10/22 20:21:37 by kebakal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_size(int n)
{
	int	res;

	res = 1;
	if (n < 0)
		res++;
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		size;
	int		n_flag;
	char	*num_str;

	size = nbr_size(nbr);
	i = size - 1;
	n_flag = 1;
	num_str = malloc(sizeof (int) * size + 1);
	if (!num_str)
		return (NULL);
	if (nbr < 0)
		n_flag = -n_flag;
	while (i >= 0)
	{
		num_str[i--] = n_flag * (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n_flag < 0)
		num_str[0] = '-';
	num_str[size] = '\0';
	return (num_str);
}
