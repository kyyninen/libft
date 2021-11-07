/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:29:37 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/07 19:11:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;
	size_t	i;

	buf = ft_memalloc(len);
	if (!buf)
		return (0);
	i = 0;
	while (i < len)
	{
		*(char *)(buf + i) = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(buf + i);
		i++;
	}
	ft_memdel(&buf);
	return (dst);
}
