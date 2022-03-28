/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:25:50 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/23 17:43:47 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(10, fd);
}

/* int main(void)
{
	// int fd = open("/Users/bcarreir/Desktop/libft/hello.txt", O_CREAT | O_WRONLY);
	
	ft_putendl_fd("Hello", 1);
} */