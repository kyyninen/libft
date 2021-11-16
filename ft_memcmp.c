/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:57:58 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/16 19:26:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(const unsigned char *) s1 != *(const unsigned char *) s2)
			return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
