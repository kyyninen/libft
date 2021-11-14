/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:49:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/14 17:21:27 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	if (n > -10 && n < 10)
		return (len + 1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	if (n < 0)
		sign = 1;
	else
		sign = 0;
	len = ft_intlen(n);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[len--] = '0';
	while (n != 0)
	{
		str[len--] = '0' + (ft_abs(n % 10));
		n /= 10;
	}
	if (sign)
		str[len] = '-';
	return (str);
}
