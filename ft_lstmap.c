/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:43:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/17 14:31:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstfree(t_list **lst)
{
	if ((*lst)->next != NULL)
		ft_lstfree(&(*lst)->next);
	ft_memdel(&(*lst)->content);
	ft_memdel((void **) lst);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*h1;

	head = f(lst);
	if (!lst)
		return (NULL);
	lst = lst->next;
	h1 = head;
	while (lst != NULL)
	{
		h1->next = f(lst);
		if (!h1->next)
		{
			ft_lstfree(&head);
			return (NULL);
		}
		lst = lst->next;
		h1 = h1->next;
	}
	return (head);
}
