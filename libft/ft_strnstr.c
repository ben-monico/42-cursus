/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:34:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/03 13:02:41 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && needle[j] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j]
			&& needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/* #include<string.h>

int main(void)
{
	char str[] = "aaabcabcd";
	char str1[] = "abcd";
	unsigned int i;

	i = 9;
	printf("%s\n", ft_strnstr(str, str1, i));
	printf("%s\n", strnstr(str, str1, i));
} */