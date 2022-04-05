/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:57:03 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/05 18:55:56 by bcarreir         ###   ########.fr       */
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
void	ft_free(char **str);
int		ft_isdigit(int c);
void	ft_lstclear(t_node **lst);
t_node	*ft_parse_args(int argc, char **argv);
void	ft_push(t_node *head, t_stack *otherstack);
void	ft_putstr(char *s);
void	ft_rotation(t_node *head);
void	ft_rev_rotation(t_node *tail);
char	**ft_split(char const *s, char c);
t_node *ft_split_to_stack(int argc, char **argv);
int		ft_strvalid(char **str);
void	ft_swap(t_node *head);
t_node	*initnode(int i);
t_stack	*initstack(int size);



#endif