/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:42:17 by tpolonen          #+#    #+#             */
/*   Updated: 2022/04/01 14:06:26 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    long    blong;
    void    *ptr;

    blong = (long) c * 0x101010101010101;
    ptr = b;
    while (len >= sizeof(long))
    {
        *(long *) ptr = blong;
        ptr += sizeof(long);
        len -= sizeof(long);
    }
    if (len >= sizeof(int))
    {
        *(int *) ptr = (int) blong;
        ptr += sizeof(int);
        len -= sizeof(int);
    }
    while (len > 0)
    {
        *(unsigned char *) ptr++ = (unsigned char) c;
        len--;
    }
    return (b);
}
