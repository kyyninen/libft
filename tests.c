/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:36:42 by tpolonen          #+#    #+#             */
/*   Updated: 2021/10/29 19:21:08 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdlib.h>

//TODO: replace free with ftlib-equivalent
void	test_memalloc(void)
{
	void	*ptr;
	int		i;

	ptr = ft_memalloc(sizeof(char) * 8);
	i = 0;
	while (i < 8)
	{
		(char *) ptr[i] = '\0';
		i++;
	}
	free(ptr);
}
