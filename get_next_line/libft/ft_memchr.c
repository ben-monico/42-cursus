/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:41:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/23 18:47:39 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
			return ((unsigned char *)str + i);
		i++;
	}
	return (NULL);
}

/* #include <string.h>
int main(void)
{
	int				c = 2+256;
	const char		*s = "ABCDEFGHIJ";
	unsigned int	n = 3;

	printf("%s\n", (ft_memchr(s, c, n)));
	printf("%s\n", (memchr(s, c, n)));
}*/