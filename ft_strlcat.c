/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:51:57 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/12 19:17:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	size_t	dstlen;
	size_t	wrote;

	dstlen = ft_strlen(dst);
	total = ft_strlen(src) + dstlen;
	dst += dstlen;
	wrote = 0;
	while (*src && wrote < dstsize - dstlen - 1)
	{
		*dst++ = *src++;
		wrote++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (total);
}
