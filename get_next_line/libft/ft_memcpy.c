/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:04:17 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/28 18:51:50 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*d;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* #include<string.h>
int main(void)
{
	char s[] = "Hello";
	char *s1 = "Words";
	unsigned int n = 6;

	printf("mine: %s %p\n", ft_memcpy(s, s1, n), ft_memcpy(s, s1, n));

	char s2[] = "Hello";
	char *s3 = "Words";
	printf("orig: %s %p\n", memcpy(s2, s3, n), memcpy(s2, s3, n));
} */