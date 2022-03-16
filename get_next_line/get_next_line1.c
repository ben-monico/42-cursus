/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:35:16 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/16 19:34:09 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_pread(int fd, void *buf, size_t nbyte, unsigned long offset)
{
	char *str;

	if (!str)
		return (NULL);
	str = ft_strdup((int *)&fd);
	if (!str)
		return (NULL);
	read((char *)&str[offset], buf, nbyte);
	return (nbyte);
}

char *get_next_line(int fd)
{
	static char 	*buffer;
	char			*str;
	static char		*rem;
	int				buffsize;
	static int		totalbs;
	unsigned long	offset;
	static int		i;
	static int		k;
	static int		count;
	static int		nlc; //newlinechar

	if (BUFFER_SIZE == 0)
		return (NULL);
	offset = count * BUFFER_SIZE;
	k = 0;
	nlc = NULL;
	str = NULL;
	totalbs += BUFFER_SIZE;
	while (1)
	{
		buffer = (char *)ft_calloc(totalbs, sizeof(char));
		if (rem)
			ft_memmove(buffer, rem, ft_strlen(rem))
		if (!buffer)
			return (NULL);
		if (str)
			ft_memmove((char *)&buffer, str, i);
		ft_pread(fd, buffer, BUFFER_SIZE, offset);
		buffsize = BUFFER_SIZE;
		while (buffer[i] && buffsize)
		{
			if (buffer[i] == '\n')
				nlc = i;
			i++;
			buffsize--;
		}
		if (nlc)
		{
			str = ft_substr(buffer, k, (unsigned int)(nlc - k)); //nlc - 1o indice depois de 1 nlc
			rem = ft_substr(buffer, nlc + 1, ft_strlen(buffer));
			free(buffer);
			count++;
			return (str);
		}
		str = ft_strdup(buffer);
		if (!str)
			return (NULL);
	}
}