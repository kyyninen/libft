/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:04:13 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/17 16:10:50 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (*s && dstsize > 1)
	{
		*d++ = *s++;
		dstsize--;
	}
	if (dstsize > 0)
		*d = '\0';
	return (d - dst + ft_strlen(s));
}
