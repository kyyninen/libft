/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:51:57 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/23 19:14:18 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (*d && dstsize > 0)
	{
		d++;
		dstsize--;
	}
	while (*s && dstsize > 1)
	{
		*d++ = *s++;
		dstsize--;
	}
	if (dstsize > 0)
		*d = '\0';
	return ((size_t)(d - dst) + ft_strlen(s));
}
