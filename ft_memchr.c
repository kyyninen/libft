/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:25:48 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 16:22:32 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;

	s1 = (const unsigned char *) s;
	while (n)
	{
		if (*s1 == (unsigned char) c)
			return ((void *) s1);
		s1++;
		n--;
	}
	return (NULL);
}
