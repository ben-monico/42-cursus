/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:45:37 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/22 11:11:30 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = (char *)b;
	while (i < len)
		a[i++] = c;
	return (b);
}

/* #include<string.h>

int main(void)
{
	char b[] = "whathefuckisup";
	int c = 'A';
	unsigned int len = 16;

	printf("mine %s\n", ft_memset(b, c, len));
	printf("orig %s\n", memset(b, c, len));
} */