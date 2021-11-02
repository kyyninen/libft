/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:40:43 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/02 18:39:44 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			count++;
		s++;
	}
	return (count + 1);
}

static size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int		count;
	int		i;
	size_t	len;
	char	**words;

	if (*s == '\0')
		count = 0;
	else
		count = count_words(s, c);
	words = (char **) malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (count > 0)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		words[i++] = ft_strsub(s, 0, len);
		s += len;
		count--;
	}
	words[i] = ft_strnew(1);
	return (words);
}
