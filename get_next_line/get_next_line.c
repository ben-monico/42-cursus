/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:27:53 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/16 17:02:55 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "get_next_line.h"

char *get_next_line(int fd)
{
	static char	*s;
	static char	*aux;
	static char *tmp;
	char		*str;
	int			i;
	int			buffersize;
	static int	l;
	static int	k; //on future call, start here for the next line 

	s = NULL;
	aux = NULL;
	k = 0;
	if (BUFFER_SIZE == 0)
		return (NULL);
	while (1)
	{
		buffersize = BUFFER_SIZE;
		l += buffersize;

		s = (char *)ft_calloc(l, sizeof(char));
		i = l - buffersize;
		read(fd, (char *)&tmp[i], buffersize);

		while ((i < l) && tmp[i])
		{
			i++;
		}

		s = (char *)ft_calloc(ft_strlen(aux) + i, sizeof(char));
		if (!s)
			return (NULL);

		if (aux)
		{
			ft_memmove((char *)&s[0], (char *)&aux[0], k);
			free(aux);
		}

		ft_memmove((char *)&s[k], (char *)&tmp[l - buffersize], i);
		free(tmp);
		while (s[k] && i)
		{
			if (s[k] == '\0' || s[k] == '\n')
			{
				k++;
				str = ft_substr(s, 0, k);
				free(s);
				return (str);
			}
			i--;
			k++;
		}
		aux = (char *)ft_calloc(k, sizeof(char));
		if (!aux)
			return (NULL);
		ft_memmove((char *)&aux[0], (char *)&s[0], k);
		free(s);
	}
}

 #include <fcntl.h>
 
 
int main(void)
{
	int fd = open("/Users/bcarreir/Desktop/Github/get_next_line/hello.txt", O_RDONLY);
	printf("%s", get_next_line(fd));	
		printf("%s", get_next_line(fd));	

	printf("%s", get_next_line(fd));	

	printf("%s", get_next_line(fd));	

	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	
	printf("%s", get_next_line(fd));	



}