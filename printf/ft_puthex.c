/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:16:40 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 03:27:34 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include "libftprintf.h"

static size_t ft_nblen(long n)
{
	size_t	len;
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 16)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static char *ft_createstr(long n, size_t len)
{
	char *s;
	
	s = (char *)malloc(sizeof(char) * (ft_nblen(n) + 1));
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
int *ft_itohex(size_t n, int *cc, char c)
{
	size_t	len;
	char 	*s;
	int		i;

	len = ft_nblen(n);
	s = ft_createstr(n, len);
	i = 0;
	cc += strlen(s);
	if (c == 'x')	
		ft_putstr(s);
	else if (c == 'X')
	{
		while (s[i])
		{
			s[i] = ft_toupper(s[i]);
			i++;
		}
		ft_putstr(s);
	}
	int g = *cc;
	ft_putint(g);
	return (cc);
}

int main(void)
{
	int c = 13;

	ft_itohex(15, &c, 'X');
	printf("\n%x", 15);
}