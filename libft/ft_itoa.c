/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:15:47 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/23 16:20:17 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itochar(int n, char *s, int len)
{
	long	nb;
	int		i;

	nb = n;
	i = len;
	if (nb < 0)
	{
		nb = -nb;
		s[0] = '-';
	}
	s[i] = '\0';
	i--;
	while (nb >= 10)
	{
		s[i] = "0123456789"[nb % 10];
		nb /= 10;
		i--;
	}
	s[i] = "0123456789"[nb % 10];
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*s;

	len = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (s);
	ft_itochar(n, s, len);
	return (s);
}

/* int main(void)
{
	printf("%s\n", ft_itoa(0014));
} */