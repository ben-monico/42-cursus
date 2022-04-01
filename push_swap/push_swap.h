/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:57:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/01 18:07:24 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list { //node //box
	int	nb;
	struct s_list *next;
	struct s_list *prev;
} t_list;

typedef struct s_stack
{
	t_list		*head;
	t_list		*tail;
	int			size;
}	t_stack;

typedef struct s_array {
	int	*array;
	int  size;
	int  mean;
	int  min;
	int  max;
} t_arrray;

typedef struct s_pushswap
{
	t_stack *a; //ps->a->head->nb
	t_stack *b;
}				t_ps;

t_list	*ft_find_head(t_list *ptr);
t_list	*ft_find_tail(t_list *ptr);


#endif