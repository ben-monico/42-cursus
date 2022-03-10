/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:04:55 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 16:00:31 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putptr(unsigned int long uil, int cc)
{
	if (uil >= 16)
	{
		ft_putptr(uil / 16, cc);
		cc += ft_putchar("0123456789"[uil % 16], cc);
	}
	else
		cc += ft_putchar("0123456789"[uil % 16], cc);
	return (cc);
}
