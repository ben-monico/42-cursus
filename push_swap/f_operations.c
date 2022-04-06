/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:41:14 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/06 16:41:04 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node *node)
{
	t_node *aux;

	if (!node || node->next == NULL)
		return ;
	aux = node;
	node->nb = node->next->nb;
	node->next->nb = aux->nb;
}

void	ft_push(t_stack *stack, t_stack *stackaux)
{
	t_node *aux;

	if (!stack->head)
		return;
	aux = stack->head->next;
	stack->head->next = stackaux->head;
	stackaux->head = stack->head;
	stack->head = aux;
}

void	ft_rotation(t_stack *stack)
{
	t_node *aux;

	aux = stack->head->next;
	stack->tail->next = stack->head;
	stack->head->next = NULL;
	stack->head = aux;
	stack->tail = stack->tail->next;
}

void	ft_rev_rotation(t_stack *stack)
{
	t_node *aux;

	aux = stack->tail->prev;
	stack->tail->next = stack->head;
	stack->head = stack->tail;
	aux->next = NULL;
	stack->tail = aux;
}

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
// ss : sa and sb at the same time.
// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
// rr : ra and rb at the same time.
// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.
// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
// rrr : rra and rrb at the same time.