/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:29:00 by tpolonen          #+#    #+#             */
/*   Updated: 2021/11/07 18:29:07 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	return (c > 96 && c < 123);
}

static int	ft_isupper(int c)
{
	return (c > 64 && c < 91);
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
