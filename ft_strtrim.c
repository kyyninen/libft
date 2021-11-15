/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:31:17 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/15 13:08:58 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s) - 1;
	while (*(s + start) && ft_isspace(*(s + start)))
		start++;
	if (*(s + start) == '\0')
		return (ft_strnew(0));
	while ((s + end) > (s + start) && ft_isspace(*(s + end)))
		end--;
	str = ft_strsub(s, start, end - start + 1);
	return (str);
}
