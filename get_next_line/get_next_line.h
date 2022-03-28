/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:25:57 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/27 22:00:53 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

char	*ft_strjoingnl(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlengnl(const char *s);
char	*ft_strdup(const char *s);
char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif