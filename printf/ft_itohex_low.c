/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:16:40 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/09 20:06:16 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static int ft_nblen(long n)
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

char *ft_itohex(long n)
{
	char *s;
	int	i;

	s = (char *)malloc(sizeof(char) * (ft_nblen(n) + 1));
	if (!s)
		return NULL;
	i = ft_nblen(n);
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	s[i] = '\0';
	i--;
	if (n >= 16)
	{
		s[i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i--;
	}
	s[i] = "0123456789abcdef"[n % 16];
	return (s);
}

int main(void)
{
	printf("%s", ft_itohex(99));
}