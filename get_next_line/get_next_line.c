/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:17:52 by benmonico         #+#    #+#             */
/*   Updated: 2022/03/27 22:08:09 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../libft/libft.h"

char	*ft_read(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*aux;
	char	*str;
	int		ret;

	ret = 1;
	aux = (char *)malloc(sizeof(char));
	ft_memset(aux, 0, 1);
	while (ret > 0)
	{
		str = ft_strdup(aux);
		free(aux);
		ft_memset(buffer, 0, BUFFER_SIZE + 1);
		ret = read(fd, buffer, BUFFER_SIZE);
		aux = ft_strjoingnl(str, buffer);
		free(str);
		if (ret == -1 || (!*aux && ret == 0))
		{
			free(aux);
			return (NULL);
		}
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (aux);
}

char	*get_line(char *aux)
{
	char	*line;
	int		i;

	i = 0;
	while (aux[i] && aux[i] != '\n')
		i++;
	if (aux[i] == '\n')
		line = ft_substr(aux, 0, i + 1);
	else
		line = ft_strdup(aux);
	return (line);
}

char	*ft_updateaux(char *aux)
{
	char	*str;
	int		i;

	i = 0;
	while (aux[i] && aux[i] != '\n')
		i++;
	if (aux[i] == '\n')
	{
		str = ft_strdup(aux);
		free(aux);
		aux = ft_substr(str, i + 1, ft_strlengnl(str));
		free(str);
		return (aux);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*aux;
	char		*line;
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read(fd);
	if ((!str && !aux) || (!str && !*aux))
		return (NULL);
	line = ft_strdup(aux);
	free(aux);
	aux = ft_strjoingnl(line, str);
	free(line);
	line = get_line(aux);
	free(str);
	aux = ft_updateaux(aux);
	return (line);
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd = open("/Users/benmonico/Desktop/Github/get_next_line/hello.txt", O_RDONLY);


 char *string;

 string = get_next_line(fd);
 free (string);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));
// 	// printf("%s", get_next_line(fd));

// 	}