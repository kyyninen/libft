/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:25:48 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/14 16:04:28 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*s1;

	s1 = (void *) s;
	while (n)
	{
		if (*(char *)s1 == c)
			return (s1);
		s1++;
		n--;
	}
	return (0);
}
