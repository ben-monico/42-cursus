/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:08:18 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/16 16:03:29 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	if (!s)
		return (0);
	while (s[c])
		c++;
	return (c);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (char *)&s[start], len + 1);
	return (substr);
}

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (0);
	ft_strlcpy(dup, s, (ft_strlen(s) + 1));
	return (dup);
}

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

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_memset(ptr, 0, count * size);
	return (ptr);
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

void	ft_putnbr_fd(int n, int fd)
{
	long	trans;

	trans = n;
	if (trans < 0)
	{
		trans = -trans;
		ft_putchar_fd('-', fd);
	}
	if (trans >= 10)
	{
		ft_putnbr_fd(trans / 10, fd);
		ft_putchar_fd("0123456789"[trans % 10], fd);
	}
	else
		ft_putchar_fd("0123456789"[trans % 10], fd);
}
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
