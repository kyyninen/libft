/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:25:10 by teppo             #+#    #+#             */
/*   Updated: 2022/06/21 20:35:10 by teppo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_fabsf(float n)
{
	if (n == -0.0f)
		return (0.0f);
	if (n < 0.0)
		return (n * -1.0);
	return (n);
}

double	ft_fabs(double n)
{
	if (n == -0.0)
		return (0.0);
	if (n < 0.0)
		return (n * -1.0);
	return (n);
}

long double	ft_fabsl(long double n)
{
	if (n == -0.0L)
		return (0.0L);
	if (n < 0.0)
		return (n * -1.0);
	return (n);
}
