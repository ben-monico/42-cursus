/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:27:11 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/22 10:43:48 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - s2[i]);
}

/* #include<string.h>
int main(void)
{
	char s1[] = "brincadeira";
	char s2[] = "asdaf";
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));
} */