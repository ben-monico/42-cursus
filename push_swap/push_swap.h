/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:57:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/04 23:54:43 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_node { //node
	int	nb;
	struct s_node *next;
	struct s_node *prev;
} t_node;

typedef struct s_stack
{
	t_node		*head;
	t_node		*tail;
	int			size;
}	t_stack;

typedef struct s_pushswap
{
	t_stack *a; //ps->a->head->nb
	t_stack *b;
}				t_ps;

typedef struct s_array {
	int	*array;
	int  size;
	int  mean;
	int  min;
	int  max;
} t_array;

int		ft_atoi_adp(char *str, int *valid_arg);
t_node	*ft_find_head(t_node *ptr);
t_node	*ft_find_tail(t_node *ptr);
int		ft_atoi(const char *str);
t_node	*initnode(int i);
t_stack	*initstack(int size);
void	ft_push(t_node *head, t_stack *otherstack);
void	ft_putstr(char *s);
void	ft_rotation(t_node *head);
void	ft_rev_rotation(t_node *tail);
char	**ft_split(char const *s, char c);
void	ft_swap(t_node *head);



#endif