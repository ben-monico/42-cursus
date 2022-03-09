/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:21:42 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:52:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* #include<stdio.h>
#include<ctype.h>

int main(void)
{
	int i;

	i = 45;
	printf("%d\n", ft_isascii(i));
	printf("%d\n", isascii(i));
}*/