/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 09:54:46 by mosborne          #+#    #+#             */
/*   Updated: 2018/03/15 07:54:36 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strrev(char *str)
{
    int x;
    int i;
    char *tmp;

    i = 0;
    x = ft_strlen(str);
    tmp = ft_strnew(x);
    x--;
    bzero(tmp, x);
    while (str[x])
    {
        tmp[i] = str[x];
        x--;
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}

char    *ft_ui_toa(unsigned int n)
{
        unsigned int    sign;
        unsigned int    count;
        char            *str;

        count = 1;
        sign = n;
        while (sign /= 10)
                count++;
        str = ft_strnew(count);
        if (!str)
                return (NULL);
        while (--count >= sign)
        {
                str[count] = n >= 10 ? (n % 10) + 48 : n + 48;
                n /= 10;
        }
        str[ft_strlen(str)] = '\0';
        return (str);
}

char    *ft_ui_ll_toa(unsigned long long n)
{
        unsigned long long int  sign;
        unsigned int            count;
        char                    *str;

        count = 1;
        sign = n;
        while (sign /= 10)
                count++;
        str = ft_strnew(count);
        if (!str)
                return (NULL);
        while (--count >= sign)
        {
                str[count] = n >= 10 ? (n % 10) + 48 : n + 48;
                n /= 10;
        }
        str[ft_strlen(str)] = '\0';
        return (str);
}