/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:48:56 by bcarreir          #+#    #+#             */
/*   Updated: 2022/03/10 15:43:33 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int 	ft_nbrlen(long n, int base);
int		ft_putchar(char c, int cc);
int		ft_putint(int n, int cc);
int		ft_putuint(unsigned int long n, int cc);
int		ft_putstr(char *s, int cc);
int		ft_printf(const char *, ...);
int		ft_toupper(int c);


#endif