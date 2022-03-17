/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:17:52 by benmonico         #+#    #+#             */
/*   Updated: 2022/03/17 03:44:22 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_wordcount(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s != c && *s)
			s++;
		wc++;
	}
	return (wc);
}

static void	*ft_dealmem(char **a, int j, char const *str, char c)
{
	char	**b;
	int		cc;

	b = a;
	cc = 0;
	while (*str && *str != c)
	{
		str++;
		cc++;
	}
	b[j] = (char *)malloc(sizeof(char) * (cc + 2));
	if (!b[j])
	{
		while (j--)
			free(b[j]);
		free(b);
		return (NULL);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		j;
	int		k;
	int		wc;

	wc = ft_wordcount(s, c);
	a = (char **)malloc(sizeof(char *) * (wc + 2));
	if (!a)
		return (NULL);
	a[0] = NULL;
	j = 1;
	while (j != wc)
	{
		while (c == *s && *s)
			s++;
		ft_dealmem(a, j, s, c);
		k = 0;
		while (*s && c != *s)
			a[j][k++] = (char)*s++;
		a[j][k] = '\n';
		a[j][k + 1] = '\0';
		j++;
	}
	a[j] = NULL;
	return (a);
}


char *get_next_line(int fd)
{
	static char	**newlines;
	static char	**buffer;
	char	str[BUFFER_SIZE];
	int	bs;
	static int len;
	static int	j;
	int	i;


	
	if (BUFFER_SIZE == 0 || !fd)
		return (NULL);
	if (newlines == NULL)
	{
		while (1)
		{
			bs = BUFFER_SIZE;
			i = 0;
			read(fd, buffer[j], BUFFER_SIZE);

			while (bs > 1 && str[i])
			{
				bs--;
				i++;
			}
			if (str[i] == '\0')
			{
				len += i;
				break;
			}
			else
				len += BUFFER_SIZE;
			ft_memset(str, 0, BUFFER_SIZE);
		}
		printf("len is %d\n", len);
		buffer = (char *)ft_calloc(len, sizeof(char));
		read(fd, (char *)&buffer, len);
		// newlines = ft_split(buffer, '\n');
	}
	// j++;
	// if (newlines[j])	
	// 	return (newlines[j]);
	// else
	while (i <= 344)
	{
		ft_putchar_fd(buffer[i], 1);
		i++;
	}
	return (NULL);
}

#include <fcntl.h>
 
 
int main(void)
{
	int fd = open("/Users/benmonico/Desktop/Github/get_next_line/hello.txt", O_RDONLY);
	printf("%s", get_next_line(fd));	
}