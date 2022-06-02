/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:49:56 by tpolonen          #+#    #+#             */
/*   Updated: 2022/06/02 18:42:37 by teppo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbit(const void *ptr, size_t count)
{
	unsigned char	*b;
	int				i;
	int				j;

	b = (unsigned char *) ptr;
	i = count - 1;
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			if ((b[i] >> j) & 1)
				ft_putchar('1');
			else
				ft_putchar('0');
			j--;
		}
		i--;
	}
	ft_putchar('\n');
}
