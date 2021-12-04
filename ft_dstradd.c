/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:16:21 by tpolonen          #+#    #+#             */
/*   Updated: 2021/12/03 18:37:59 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	dstr_ensure_space(t_dstr *ds, size_t add_len)
{
	size_t	new_size;
	char	*new_str;

	if (ds->alloced > ds->len + add_len + 1)
		return ;
	new_size = ds->alloced * 2;
	while (new_size < ds->len + add_len + 1)
		new_size *= 2;
	new_str = ft_strnew(new_size);
	ft_memcpy((void *)new_str, (void *)ds->str, ds->len);
	ds->alloced = new_size;
	ft_memdel((void **)&(ds->str));
	ds->str = new_str;
}

void	ft_dstradd(t_dstr *ds, const char *str, size_t len)
{
	if (len == 0)
		len = ft_strlen(str);
	dstr_ensure_space(ds, len);
	ft_memcpy((void *)str, (void *)ds->str + ds->len, len);
}
