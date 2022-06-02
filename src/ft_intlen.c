/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:33:18 by tpolonen          #+#    #+#             */
/*   Updated: 2022/06/02 18:36:37 by teppo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n, int base)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

size_t	ft_ssizelen(ssize_t n, int base)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

size_t	ft_sizelen(size_t n, int base)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
