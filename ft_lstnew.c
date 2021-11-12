/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:55:52 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/12 13:42:49 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l1;
	void	*c1;

	l1 = (t_list *) ft_memalloc(sizeof(t_list));
	if (content == NULL)
	{
		l1->content = NULL;
		l1->content_size = 0;
	}
	else
	{
		c1 = ft_memalloc(content_size);
		ft_memcpy(c1, content, content_size);
		l1->content_size = content_size;
		l1->content = c1;
	}
	l1->next = NULL;
	return (l1);
}
