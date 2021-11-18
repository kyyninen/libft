/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:43:45 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/18 16:18:46 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_lstfree(t_list **lst)
{
	if ((*lst)->next != NULL)
		ft_lstfree(&(*lst)->next);
	free((*lst)->content);
	free((void *) *lst);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*h1;

	head = f(lst);
	if (!head)
		return (NULL);
	lst = lst->next;
	h1 = head;
	while (lst != NULL)
	{
		h1->next = f(lst);
		if (h1->next == NULL)
		{
			ft_lstfree(&head);
			return (NULL);
		}
		lst = lst->next;
		h1 = h1->next;
	}
	return (head);
}
