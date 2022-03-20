/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:17:52 by benmonico         #+#    #+#             */
/*   Updated: 2022/03/20 19:04:34 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
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

char *get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	static char	*str;
	static char	*aux;	
	int			ret;
	static int	k;
	static int	i;

	if (fd < 0 || BUFFER_SIZE <= 0 || (k > 0 && str == NULL))
		return (NULL);
	if (k > 0 && str[k] == '\0')
		return (NULL);
	if (str == NULL && k == 0)
	{
		str = (char *)ft_calloc(1, sizeof(char));
		while (1)
		{
			if (aux)
				free (aux);
			ft_memset(buffer, 0, BUFFER_SIZE + 1);
			ret = read(fd, buffer, BUFFER_SIZE);
			if (ret == -1 || (!*str && ret == 0))
			{
				free (str);
				return (str = NULL);
			}
			aux = ft_strdup(str);
			if (str && ret == 0)
				break;
			free (str);
			str = ft_strjoin(aux, buffer);
		}
	}
	free(aux);
	i = k;
	while (str[k] && str[k] != '\n')
		k++;
	aux = ft_substr(str, i, k - i + 1);
	if (str[k])
		k++;
	else
		free (str);
	return (aux);
}

#include <fcntl.h>
int main(void)
{
	int fd = open("/Users/benmonico/Desktop/Github/get_next_line/hello.txt", O_RDONLY);
	int ret = 0;
	
	while (ret < 3 )
	{
		printf("%s", get_next_line(fd));
		ret++;
	}

	
// 	// get_next_line(fd);
}