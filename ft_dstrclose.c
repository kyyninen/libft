/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrclose.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:28:19 by tpolonen          #+#    #+#             */
/*   Updated: 2021/12/27 16:29:05 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dstrclose(t_dstr **ds, char **target)
{
	int	ret;

	ret = 0;
	if (*ds == NULL)
		return (ret);
	if (target != NULL)
	{
		ret = 1;
		if ((*ds)->alloced == (*ds)->len + 1)
			*target = (*ds)->str;
		else
		{
			*target = ft_strnew((*ds)->len);
			if (target)
				ft_memcpy(*target, (*ds)->str, (*ds)->len);
			else
				ret = -1;
			free((*ds)->str);
		}
	}
	else
		free((*ds)->str);
	free(*ds);
	return (ret);
}
