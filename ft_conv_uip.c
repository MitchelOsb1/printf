/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_uip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 07:30:05 by mosborne          #+#    #+#             */
/*   Updated: 2018/03/21 12:06:02 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *c_ptoa(unsigned long int num)
{
    unsigned int    x;
    char            str[12];
    char            *h_lower;

    x = 0;
    bzero(str, 12);
    h_lower = "0123456789abcdef";
    if (num < x)
        return (0);
    if (num == 0)
        str[x++] = '0';
    while (num)
    {
        str[x++] = h_lower[num % 16];
        num = num / 16;
    }
    str[x] = '\0';
    return (ft_strrev(str));
}

char    *c_octoa(unsigned long int num)
{
    char            str[21];
    unsigned int    x;

    x = 0;
    bzero(str, 21);
    if (num < x)
        return (0);
    if (num == 0)
        str[x++] = '0';
    while (num)
    {
        str[x++] = ((num % 8) + 48);
        num = num / 8;
    }
    str[x] = '\0';
    return (ft_strrev(str));
}

char    *c_hexoa(unsigned long int num, t_utils *i)
{
    char    str[21];
    char    *h_lower;
    char    *h_upper;
    int     x;

    x = 0;
    bzero(str, 21);
    h_lower = "0123456789abcdef";
    h_upper = "0123456789ABCDEF";
    if (num == 0)
        str[x] = '0';
    if (i->cha_r == 'x')
        while (num)
        {
            str[x++] = h_lower[num % 16];
            num = num / 16;
        }
    if (i->cha_r == 'X')
        while (num)
        {
            str[x++] = h_upper[num % 16];
            num = num / 16;
        }
    return (ft_strrev(str));
}