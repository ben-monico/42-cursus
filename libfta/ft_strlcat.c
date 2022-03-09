/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:49:34 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/22 11:30:34 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	if (i > dstsize)
		return (dstsize + j);
	else
		return (i + j);
}

/* #include<string.h>
int main(void)
{
	unsigned int i = 1;
	char str1[50] = "Hello World";
	char str2[5] = "56";

	printf("mine: %lu ", ft_strlcat(str1, str2, i));
	printf("%s\n", str1);

	char str3[50] = "Hello World";
	printf("orig: %lu ", strlcat(str3, str2, i));
	printf("%s\n", str3);

} */