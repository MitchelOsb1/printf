/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 08:58:43 by mosborne          #+#    #+#             */
/*   Updated: 2018/03/21 15:35:19 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_wchar(t_utils *i, va_list input)
{
    wchar_t x;
    char    *str;

    x = va_arg(input, wint_t);
    str = c_unitoa(x);

}

