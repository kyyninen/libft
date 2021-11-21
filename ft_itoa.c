/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:49:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/21 18:00:41 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	if (n < 0)
		sign = 1;
	else
		sign = 0;
	len = ft_intlen(n, 10);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[len] = '0';
	while (n != 0)
	{
		str[len--] = '0' + (ft_abs(n % 10));
		n /= 10;
	}
	if (sign)
		str[len] = '-';
	return (str);
}
