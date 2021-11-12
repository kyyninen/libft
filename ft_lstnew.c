/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:55:52 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/12 11:25:30 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l1;
	void	*c1;

	l1 = (t_list *) malloc(sizeof(t_list));
	c1 = malloc(content_size);
	ft_memcpy(c1, content, content_size);
	l1->content = c1;
	return (l1);
}
