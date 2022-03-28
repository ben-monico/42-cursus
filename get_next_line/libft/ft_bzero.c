/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:54 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:49:58 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*c;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

/* #include <strings.h>

int main(void)
{
	char str[] = "chipotle";
	char str1[] = "chipotle";

	ft_bzero(str, 0);
	bzero(str1, 1);
	printf("%c\n", str[0]);
	printf("%c\n", str1[0]);
} */