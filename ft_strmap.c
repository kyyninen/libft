/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:52:13 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/01 18:45:55 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char(*f) (char))
{
	char	*s2;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	s2 = (char *) malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		s2[i] = f(s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
