/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:42:12 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/14 15:58:57 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d1;
	unsigned char	*s1;
	unsigned char	c1;

	d1 = (unsigned char *) dest;
	s1 = (unsigned char *) src;
	c1 = (unsigned char) c;
	if (n == 0)
		return (NULL);
	while (n > 0 && *s1 != c1)
	{
		*d1++ = *s1++;
		n--;
	}
	if (*s1 == c1)
	{
		*d1 = *s1;
		return (++d1);
	}
	return (NULL);
}	
