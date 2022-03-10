/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:16:40 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 15:42:12 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include "libftprintf.h"

static char *ft_createstr(long n, size_t len)
{
	char *s;
	
	s = (char *)malloc(sizeof(char) * (ft_nbrlen(n, 16) + 1));
	if (!s)
		return NULL;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[len] = '\0';
	len--;
	if (n >= 16)
	{
		s[len] = "0123456789abcdef"[n % 16];
		n /= 16;
		len--;
	}
	s[len] = "0123456789abcdef"[n % 16];
	return (s);
}
int ft_itohex(size_t n, char c, int cc)
{
	size_t	len;
	char 	*s;
	int		i;

	len = ft_nbrlen(n, 16);
	s = ft_createstr(n, len);
	i = 0;
	if (c == 'x')	
		cc += ft_putstr(s, cc);
	else if (c == 'X')
	{
		while (s[i])
		{
			s[i] = ft_toupper(s[i]);
			i++;
		}
		cc += ft_putstr(s, cc);
	}
	return (cc);
}

/* int main(void)
{
	int c = 13;

	printf("\norig: %X", 15);
	printf("\nreturn: %d", ft_itohex(15, 'X', c));
} */