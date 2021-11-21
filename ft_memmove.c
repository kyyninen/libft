/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:29:37 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/21 15:31:53 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!len || dst == src)
		return (dst);
	d = (char *) dst;
	s = (const char *) src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
