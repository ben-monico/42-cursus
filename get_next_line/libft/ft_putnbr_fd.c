/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:31:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/21 12:54:27 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	trans;

	trans = n;
	if (trans < 0)
	{
		trans = -trans;
		ft_putchar_fd('-', fd);
	}
	if (trans >= 10)
	{
		ft_putnbr_fd(trans / 10, fd);
		ft_putchar_fd("0123456789"[trans % 10], fd);
	}
	else
		ft_putchar_fd("0123456789"[trans % 10], fd);
}

/* int main(void)
{
	ft_putnbr_fd(4, 1);
} */