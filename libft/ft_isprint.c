/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:34:41 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:52:34 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* #include<stdio.h>
#include<ctype.h>

int main(void)
{
	int i;

	i = 128;
	printf("%d\n", ft_isprint(i));
	printf("%d\n", isprint(i));
} */