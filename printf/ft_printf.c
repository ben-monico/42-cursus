/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:12:24 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 02:58:46 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

// customize functions to output int value of characters. maybe pass int* to each
static void	ft_checkspec(const char *str, int i, va_list ap)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(ap, char), 1);
	else if (str[i] == 's')
		ft_putstr(va_arg(ap, char *), 1);
	// else if (str[i] == 'p')
	// 	ft_putchar_fd(va_arg(ap, char));
	else if (str[i] == 'd' || i == 'i')
		ft_putint(va_arg(ap, int), 1);
	else if (str[i] == 'u')
		ft_putuint(va_arg(ap, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		ft_puthex(va_arg(ap, unsigned int), str[i]);
	else if (str[i] == '%')
	{
		ft_putchar_fd('%', 1);
		
	}
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		speccounter;
	int		charcounter;
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
	return (charcounter);
}