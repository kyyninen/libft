/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:49:56 by tpolonen          #+#    #+#             */
/*   Updated: 2022/06/02 17:15:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putbit(size_t const size, void const *ptr)
{
	unsigned char	*b;
	unsigned char	byte;
	int				i;
	int				j;
	t_dstr			*out;

	b = (unsigned char *) ptr;
	i = size - 1;
	out = NULL;
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
			j--;
		}
		i--;
	}
	printf("\n");
}
