/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:12:24 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 14:07:05 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

// customize functions to output int value of characters. maybe pass int* to each
static int	ft_checkspec(const char *str, int i, va_list ap, int cc)
{
	if (str[i] == 'c')
		cc = ft_putchar(va_arg(ap, char), cc);
	else if (str[i] == 's')
		cc = ft_putstr(va_arg(ap, char *), cc);
	// else if (str[i] == 'p')
	// 	cc = ft_putchar_fd(va_arg(ap, char));
	else if (str[i] == 'd' || i == 'i')
		cc = ft_putint(va_arg(ap, int), cc);
	else if (str[i] == 'u')
		cc = ft_putuint(va_arg(ap, unsigned int), cc);
	else if (str[i] == 'x' || str[i] == 'X')
		cc = ft_puthex(va_arg(ap, unsigned int), str[i], cc);
	else if (str[i] == '%')
		cc = ft_putchar('%', cc);
	return (cc);
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		speccounter;
	int		cc;
	va_list args;

	va_start(args, str);
	
	while (str[i])
	{
		if (str[i] == '%' )
		{
			cc = ft_checkspec(str, i + 1, args, cc);
			i += 2;
		}
		ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (cc);
}