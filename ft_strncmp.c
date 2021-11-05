/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:17:01 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/05 16:02:43 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s[i]) && n > 0)
	{
		if (s1[i] - s[i] != 0)
			return (s1[i] - s[i]);
		i++;
		n--;
	}
	return (0);
}
