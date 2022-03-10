/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:23:54 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 13:39:39 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putstr(char *s, int cc)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		cc = ft_putchar(s[i], cc);
		i++;
	}
	return (cc);
}
