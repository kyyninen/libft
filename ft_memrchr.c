/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:17:11 by tpolonen          #+#    #+#             */
/*   Updated: 2021/12/07 20:19:03 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memrchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(const unsigned char *)(s + n) == (unsigned char) c)
			return ((void *) s);
	}
	return (NULL);
}
