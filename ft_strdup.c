/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:06:42 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/09 22:54:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(src) + 1;
	dup = (char *)ft_memalloc(sizeof(char) * size);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, src, size);
	return (dup);
}
