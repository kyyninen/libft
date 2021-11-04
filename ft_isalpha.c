/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:16:36 by teppo             #+#    #+#             */
/*   Updated: 2021/11/04 23:48:12 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return (c > 96 && c < 123);
}

static int	ft_isupper(int c)
{
	return (c > 64 && c < 91);
}

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
