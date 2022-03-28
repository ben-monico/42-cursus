/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:11:56 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/03 12:27:24 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dest && !source)
		return (0);
	if (dest > source)
	{
		len++;
		while (--len > 0)
			(dest)[len - 1] = (source)[len - 1];
	}
	else
		ft_memcpy(dst, src, len);
	return (dest);
}

/* #include<string.h>
int main(void)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//char *s4 = "Words";
	printf("memmove mine: %s (dest)\n" , ft_memmove(s1+10, s1+4, 4));

	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//char *s3 = "Words";
	printf("memmove orig: %s (dest)\n" , memmove(s2+10, s2+4, 4));
}  */