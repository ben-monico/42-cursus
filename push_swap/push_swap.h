/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:57:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/07 21:16:23 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node {
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

long	ft_atoi(const char *str);
t_node *ft_atoiton(char **str);
int		ft_dup_check(t_node *ptr);
t_node	*ft_find_head(t_node *ptr);
t_node	*ft_find_tail(t_node *ptr);
int		ft_free(char **str);
int		ft_isdigit(int c);
void	ft_lstclear(t_node **lst);
t_node	*ft_parse_args(int argc, char **argv);
void	ft_printlist(t_stack *astk, t_stack *bstk);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
char	**ft_split(char const *s, char c);
t_node *ft_split_to_stack(int argc, char **argv);
int		ft_strvalid(char **str);
t_node	*ft_initnode(int i);
t_stack	*ft_initstack(int size);

void	ft_push(t_stack *stack, t_stack *stackaux);
void	ft_rev_rotation(t_stack *stack);
void	ft_rotation(t_stack *stack);
void	ft_swap(t_node *node);
void	ft_sa(t_stack *a_stack);
void	ft_sb(t_stack *b_stack);
void	ft_ss(t_stack *a_stack, t_stack *b_stack);

#endif