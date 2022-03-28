/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:08:18 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/27 21:55:07 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlengnl(const char *s)
{
	int	c;

	c = 0;
	if (!s)
		return (0);
	while (s[c])
		c++;
	return (c);
}

char	*ft_strjoingnl(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	str = (char *)malloc(sizeof(char) * (ft_strlengnl(s1) + ft_strlengnl(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = (char *)b;
	while (i < len)
		a[i++] = c;
	return (b);
}
char	*ft_strdup(const char *s)
{
	char	*dup;

	if (!s)
		return (NULL);
	dup = (char *)malloc(sizeof(*s) * (ft_strlengnl(s) + 1));
	if (dup == NULL)
		return (0);
	ft_strlcpy(dup, s, (ft_strlengnl(s) + 1));
	return (dup);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlengnl(s))
		return (ft_strdup(""));
	if (ft_strlengnl(s) < len)
		len = ft_strlengnl(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (char *)&s[start], len + 1);
	return (substr);
}
