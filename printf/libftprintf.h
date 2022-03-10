/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:48:56 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 03:23:02 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putint(int n);
void	ft_putstr(char *s);
int		ft_printf(const char *, ...);
int		ft_toupper(int c);


#endif