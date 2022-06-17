/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teppo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:11:22 by teppo             #+#    #+#             */
/*   Updated: 2022/06/17 13:24:55 by teppo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_pow(double num, double exponent)
{
	int		dir;
	double	ret;


	ret = num;
	if (exponent >= 0)
		dir = 1;
	else
		dir = -1;
	while (exponent != 0)
	{
		ret *= num;
		exponent -= dir;
	}
	return (num);
}

float	ft_powf(float num, float exponent)
{
	int		dir;
	float	ret;


	ret = num;
	if (exponent >= 0)
		dir = 1;
	else
		dir = -1;
	while (exponent != 0)
	{
		ret *= num;
		exponent -= dir;
	}
	return (num);

}

long double	ft_powl(long double num, long double exponent)
{
	int			dir;
	long double	ret;


	ret = num;
	if (exponent >= 0)
		dir = 1;
	else
		dir = -1;
	while (exponent != 0)
	{
		ret *= num;
		exponent -= dir;
	}
	return (num);


}
