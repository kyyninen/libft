/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:02:55 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/16 20:06:40 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **lst)
{
	if ((*lst)->next != NULL)
		ft_lstfree(&(*lst)->next);
	ft_memdel(&(*lst)->content);
	ft_memdel((void **) lst);
}
