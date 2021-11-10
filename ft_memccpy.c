/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:42:12 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/10 18:48:34 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d1;
	char	*s1;

	if (!dest || !src)
		return (dest);
	d1 = (char *) dest;
	s1 = (char *) src;
	while (n > 0 && *s1 != c)
	{
		*d1++ = *s1++;
		n--;
		if (*s1 == c)
			return (d1);
	}
	return (NULL);
}	
