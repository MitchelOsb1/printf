/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:22:19 by mosborne          #+#    #+#             */
/*   Updated: 2018/03/06 11:37:17 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_string(t_utils *i, va_list input)
{
	int		x;
	int		a;
	char	cha_r;
	char	*va_string;

	x = -1;
	a = i->width;
	va_string = va_arg(input, char *);
	if (va_string == NULL)
		va_string = "(null)";
	i->len = ft_strlen(va_string);
	cha_r = i->zero == 1 ? cha_r = '0' : ' ';
	s_wpl(i, cha_r);
	while (++x < i->len && i->precision != -69)
		ft_putchar(va_string[x]);
	if (a > i->len && i->minus == true)
		while (i->width--)
			ft_putchar(cha_r);
}

// void	convert_wchar_s(t_utils *i, va_list input)
// {

// }

// void	convert_point(t_utils *i, va_list input)
// {
	
// }

void	convert_int(t_utils *i, va_list input)
{
	int			w;
	char		cha_r;
	char		*str;
	char		sign;
	long int	x;

	w = i->width;
	x = va_arg(input, int);
	str = ft_itoa(x);
	i->len = ft_strlen(str);
	i->i_nt = x;
	cha_r = i->zero == 1 ? cha_r = '0' : ' ';
	sign = '0';
	sign = h_mps(i, sign, x);
	i_wpl(i, cha_r, w);	
	i2_wpl(i, sign, w);
	i3_wpl(i, str, cha_r, w); // add 3rd wpl function
	ft_strdel(&str);
}

// void	convert_unsigned_int(t_utils *i, va_list input)
// {
	
// }
