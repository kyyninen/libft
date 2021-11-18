/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:26:44 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 16:31:42 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h1;
	char	*n1;
	char	*stop;

	if (*needle == '\0')
		return ((char *) haystack);
	stop = (char *) haystack + len;
	while (*haystack && haystack < stop)
	{
		while (*haystack != *needle && *haystack)
			haystack++;
		if (*haystack == *needle)
		{
			h1 = (char *) haystack;
			n1 = (char *) needle;
			while (*h1++ == *n1++ && h1 <= stop)
				if (*n1 == '\0')
					return ((char *) haystack);
		}
		haystack++;
	}
	return (NULL);
}
