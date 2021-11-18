/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:26:44 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 23:14:39 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n_len;

	if (*needle == '\0')
		return ((char *) haystack);
	n_len = ft_strlen(needle);
	while (*haystack && len >= n_len)
	{
		if (*haystack == *needle && !ft_strncmp(haystack, needle, n_len))
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
