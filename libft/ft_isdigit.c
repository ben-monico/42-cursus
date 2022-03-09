/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:24:50 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:52:33 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/* #include<stdio.h>
#include<ctype.h>

int main(void)
{
	int i;

	i = 58;
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
} */