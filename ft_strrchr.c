/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:45:18 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 16:33:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s1;

	s1 =  s;
	s1 += (ft_strlen(s));
	while (s1 >= s)
	{
		if (*s1 == c)
			return ((char *) s1);
		s1--;
	}
	return (NULL);
}
