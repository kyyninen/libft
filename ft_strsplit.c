/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:40:43 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/17 14:24:53 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	free_str_tab(char ***tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(*tab[i++]);
	free(*tab);
	return (0);
}

static int	cut_word(char const *s, char c, char **tab, int i)
{
	char const	*stop;
	char		*word;

	stop = ft_strchr(s, c);
	if (stop == NULL)
		stop = s + ft_strlen(s);
	word = ft_strsub(s, 0, stop - s);
	if (!word)
		return (free_str_tab(&tab, i));
	tab[i] = word;
	return (1);
}

char	**ft_strsplit(char const *s, char c)
{
	int		count;
	int		i;
	char	**words;

	count = count_words(s, c);
	words = (char **) malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	i = 0;
	while (s != NULL && *s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!cut_word(s, c, words, i))
				return (NULL);
			i++;
			count--;
			s = ft_strchr(s, c);
		}
	}
	words[i] = 0;
	return (words);
}
