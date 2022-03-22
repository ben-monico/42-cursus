/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:17:52 by benmonico         #+#    #+#             */
/*   Updated: 2022/03/22 16:29:36 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	if (!s)
		return(0);
	while (s[c])
		c++;
	return (c);
}

char *get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	char	*str;
	static char *aux;
	int	ret;
	int	i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	if (aux)
	{
		free(line);
		str = ft_strdup(aux);
		free(aux);
		aux = NULL;
		i = 0;
		while (str[i] && str[i] != '\n')
			i++;
		if (str[i] == '\n')
		{
			aux = ft_substr(str, i + 1, ft_strlen(str));
			line = ft_substr(str, 0, i + 1);
			free(str);
			return (line);
		}
		line = ft_strdup(str);
		free(str);
	}
	ret = 1;
	while (ret > 0)
	{
		ft_memset(buffer, 0, BUFFER_SIZE + 1);
		ret = read(fd, buffer, BUFFER_SIZE);
		str = ft_strjoin(line, buffer);
		free(line);
		if (ret == -1 || (!*str && ret == 0))
		{
			free(str);
			return (NULL);
		}
		i = 0;
		while (str[i] && str[i] != '\n')
			i++;
		if (str[i] == '\n')
		{
			aux = ft_substr(str, i + 1, ft_strlen(str));
			line = ft_substr(str, 0, i + 1);
			free(str);
			return (line);
		}
		line = ft_strdup(str);
		free(str);
	}
	return (line);
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd = open("/Users/benmonico/Desktop/Github/get_next_line/hello.txt", O_RDONLY);
// 	// int ret = 0;
	
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));

// 	// while (ret < 3 )
// 	// {
// 	// 	printf("%s", get_next_line(fd));
// 	// 	ret++;
// 	// }

	
// // 	// get_next_line(fd);
// }