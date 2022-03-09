/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:12:24 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/09 19:44:33 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

static void	ft_checkspec(const char *str, int i, va_list ap)
{
	if (str[i] == 'c')
		ft_putchar_fd(va_arg(ap, char), 1);
	else if (str[i] == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	// else if (str[i] == 'p')
	// 	ft_putchar_fd(va_arg(ap, char));
	else if (str[i] == 'd' || i == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	// else if (str[i] == 'u')
	// 	ft_putnbr_fd(va_arg(ap, uint));
	else if (str[i] == 'x')
		ft_putstr_fd(ft_itohex_low(va_arg(ap, int)), 1);
	else if (str[i] == 'X')
		ft_putstr_fd(ft_toupper(ft_itohex_low(va_arg(ap, int))), 1);
	else if (str[i] == '%')
		ft_putchar_fd('%', 1);
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		speccounter;
	va_list args;
	va_start(args, str);
	
	while (str[i])
	{
		if (str[i] == '%' )
		{
			ft_checkspec(str, i + 1, args);
			i += 2;
		}
		ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
}