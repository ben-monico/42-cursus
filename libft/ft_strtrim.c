/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:01:41 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/23 17:40:38 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len != i && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(s1, i, (len - i + 1));
	return (str);
}

/* int main(void)
{
	char *s1 = "    ototabctodeftolpppptoototo    ";
	char *set = "to";

	printf("%s\n", ft_strtrim(s1, set));
} */