/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:31:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/02 15:55:06 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	skip_whitespace(char const *s, int dir)
{
	int	i;

	if (dir == -1)
		i = ft_strlen(s) - 1;
	else
		i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i += dir;
		if (i == 0)
			return (ft_strlen(s - 1));
		if (s[i] == '\0')
			return (0);
	}
	return (i);
}

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			len;
	char			*str;

	start = skip_whitespace(s, 1);
	len = skip_whitespace(s, -1) - start + 1;
	str = ft_strsub(s, start, len);
	return (str);
}
