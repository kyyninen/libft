/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:49:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/03 12:53:52 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n < 10)
		return (1);
	while (n / 10 > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*strrev(char *str)
{
	char	*rev;
	int		len;
	int		i;

	len = ft_strlen(str);
	rev = ft_strnew(len + 1);
	i = 0;
	while (i < len)
	{
		rev[i] = str[len - i - 1];
		i++;
	}
	i = 0;
	while (i < len)
	{
		str[i] = rev[i];
		i++;
	}
	ft_strdel(&rev);
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*str;

	str = ft_strnew(intlen(n) + 1);
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	n *= sign;
	i = 0;
	if (n == 0)
		*str = '0';
	while (n != 0)
	{
		if (n % 10 > 9)
			str[i++] = ((n % 10) - 10) + 'a';
		else
			str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		str[i] = '-';
	return (strrev(str));
}
