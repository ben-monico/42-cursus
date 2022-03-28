/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:17:33 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:52:24 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* #include<stdio.h>
#include<ctype.h>

int main(void)
{
	int i;

	i = 99;
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", isalpha(i));
} */