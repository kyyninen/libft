/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:18:44 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/11 16:40:22 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c > 6 && c < 14);
}

int	atoi(const char *nptr)
{
	int		n;
	int		sign;

	n = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' && *nptr == '+')
	{
		if (*nptr == '-')
			sign = 1;
		else
			sign = 0;
		nptr++;
	}
	if (sign && ft_isdigit(*nptr))
		n = -(*nptr++ - '0');
	while (ft_isdigit(*nptr))
		n = (10 * n) + (*nptr++ - '0');
	return (n);
}
