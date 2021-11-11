/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:59:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/11 19:42:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h1;
	char	*n1;

	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack)
	{
		while (*haystack != *needle && *haystack)
			haystack++;
		if (*haystack == *needle)
		{
			h1 = (char *) haystack;
			n1 = (char *) needle;
			while (*h1++ == *n1++)
			{
				if (*n1 == '\0')
					return ((char *) haystack);
			}
		}
		if (*haystack)
			haystack++;
	}
	return (NULL);
}
