/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:50:41 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 15:40:45 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putuint(unsigned int long n, int cc)
{
	
	if (n >= 10)
	{
		ft_putuint(n / 10, cc);
		ft_putchar("0123456789"[n % 10], cc);
	}
	else
		ft_putchar("0123456789"[n % 10], cc);
	cc += ft_nbrlen(n, 10);
	return (cc);
}

/* int main(void)
{
	// ft_putint(4589, 2);
	printf("\n%d", ft_putuint(4294967295, 10));
} */