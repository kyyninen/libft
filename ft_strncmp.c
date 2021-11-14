/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:17:01 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/14 17:16:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s, size_t n)
{
	unsigned char	*a1;
	unsigned char	*b1;

	a1 = (unsigned char *) s1;
	b1 = (unsigned char *) s;
	while ((*a1 || *b1) && n > 0)
	{
		if (*a1 - *b1 != 0)
			return (*a1 - *b1);
		a1++;
		b1++;
		n--;
	}
	return (0);
}
