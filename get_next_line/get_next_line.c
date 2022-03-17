/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:17:52 by benmonico         #+#    #+#             */
/*   Updated: 2022/03/17 17:24:51 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_wordcount(char const *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		if (*s == c)
			wc++;
		s++;
	}
	wc++;
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
	j = 1;
	while (j != wc + 1)
	{
		ft_dealmem(a, j, s, c);
		k = 0;
		while (*s && c != *s)
			a[j][k++] = (char)*s++;
		if (*s && c == *s)
			s++;
		if (j < wc)
			a[j][k] = '\n';
		a[j][k + 1] = '\0';
		j++;
	}
	a[j] = NULL;
	return (a);
}

int	checknull(char *buffer, unsigned long buffersize)
{
	unsigned long	i;

	i = 0;
	while (buffer[i] != '\0' && i < buffersize)
		i++;
	if (buffer[i] == '\0' && i < buffersize)
		return(1);
	return (0);
}

char *get_next_line(int fd)
{
	static char	**newlines;
	char		buffer[BUFFER_SIZE + 1];
	char		*str;
	char		*aux;	

	if (BUFFER_SIZE == 0 || !fd || (newlines && *newlines == NULL))
		return (NULL);
	str = ft_calloc(1, sizeof(char));
	if (newlines == NULL)
	{
		while (1)
		{
			ft_memset(buffer, 0, BUFFER_SIZE + 1);
			read(fd, buffer, BUFFER_SIZE);
			aux = ft_strdup(str);
			free(str);
			str = ft_strjoin(aux, buffer);
			free(aux);
			if (checknull(buffer, BUFFER_SIZE) == 1)
				break;
		}
		newlines = ft_split(str, '\n');
		free (str);
	}
	newlines++;
	return (*newlines);
}

#include <fcntl.h>
int main(void)
{
	int fd = open("/Users/benmonico/Desktop/Github/get_next_line/hello.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	
	
	// get_next_line(fd);

}