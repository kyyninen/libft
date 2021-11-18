/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:59:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 16:39:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*h1;
	const char	*n1;

	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack)
	{
		while (*haystack != *needle && *haystack)
			haystack++;
		if (*haystack == *needle)
		{
			h1 = haystack;
			n1 = needle;
			while (*h1++ == *n1++)
				if (*n1 == '\0')
					return ((char *) haystack);
		}
		if (*haystack)
			haystack++;
	}
	return (NULL);
}
