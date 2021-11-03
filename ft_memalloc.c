/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:24:03 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/03 17:44:06 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
		*(int *)(ptr + i++) = 0;
	return (ptr);
}
