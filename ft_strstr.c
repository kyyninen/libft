/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:59:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/23 20:42:53 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
