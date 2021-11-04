/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:14:51 by teppo             #+#    #+#             */
/*   Updated: 2021/11/04 22:58:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;
	size_t	i;

	buf = ft_memalloc(len);
	if (!buf)
		return NULL;
	i = 0;
	while(i < len)
	{
		*(char *) (buf + i) = *(char *) (src + i);
		i++;
	}
	i = 0;
	while(i < len)
	{
		*(char *) (dst + i) = *(char *) (buf + i);
		i++;
	}
	return (dst);
}
