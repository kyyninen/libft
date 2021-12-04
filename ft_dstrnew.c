/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:08:57 by tpolonen          #+#    #+#             */
/*   Updated: 2021/12/03 18:41:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dstr	*ft_dstrnew(const char *str, size_t len)
{
	t_dstr	*ds;

	ds = (t_dstr *) ft_memalloc(sizeof(t_dstr));
	if (!ds)
		return (ds);
	if (len == 0)
		len = ft_strlen(str);
	ds->str = ft_strnew(len);
	if (!ds->str)
	{
		ft_memdel((void **)&ds);
		return (NULL);
	}
	ft_memcpy((void *)ds->str, (void *)str, len);
	ds->alloced = len + 1;
	ds->len = len;
	return (ds);
}
