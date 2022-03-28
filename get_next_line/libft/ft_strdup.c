/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:30:21 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/27 17:26:51 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	if (!s)
		return (NULL);
	dup = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (0);
	ft_strlcpy(dup, s, (ft_strlen(s) + 1));
	return (dup);
}

/* int	main(void)
{
	char str[] = "";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
	printf("%lu\n", strlen(str));
} */