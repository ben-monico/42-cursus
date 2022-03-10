/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:31:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 03:22:08 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putint(int n)
{
	long	trans;

	trans = n;
	if (trans < 0)
	{
		trans = -trans;
		ft_putchar('-');
	}
	if (trans >= 10)
	{
		ft_putint(trans / 10);
		ft_putchar("0123456789"[trans % 10]);
	}
	else
		ft_putchar("0123456789"[trans % 10]);
}

/* int main(void)
{
	ft_putnbr_fd(4, 1);
} */