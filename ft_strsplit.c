/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:40:43 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/15 19:00:40 by tpolonen         ###   ########.fr       */
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

static size_t	wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_str_arr(char ***words)
{
	char	**arr;

	arr = *words;
	while (**arr)
		free(*arr++);
	free(*arr);
	free(*words);
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
		len = wordlen(s, c);
		words[i++] = ft_strsub(s, 0, len);
		if (!words[i - 1])
		{
			free_str_arr(&words);
			return (NULL);
		}
		s += len;
		count--;
	}
	words[i] = ft_strnew(1);
	return (words);
}
