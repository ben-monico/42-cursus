/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:06:33 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/18 14:53:30 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
		c++;
	if (size > 0)
	{
		while (src[i] && i + 1 < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}

/* #include <string.h>

int main(void)
{
	char str[50] = "Hello";
	char str2[6] = "Words";

	printf("%lu\n", ft_strlcpy(str, str2, 0));
	printf("%s\n", str);

	char str3[50] = "Hello";
	char str4[6] = "Words";

	printf("%lu\n", strlcpy(str3, str4, 0));
	printf("%s\n", str3);
} */