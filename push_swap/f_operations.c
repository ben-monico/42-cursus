/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:41:14 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/01 18:24:44 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *head)
{
	t_list *aux;

	if (!head || head->next == NULL)
		return;
	aux = head;
	head = head->next;
	head->next = aux;
}
void	ft_push(t_list *head, t_stack *otherstack)
{
	head->next = otherstack->head;
}

void	ft_rotation(t_list *head)
{
	t_list *aux;
	t_list *tail;

	tail = ft_find_tail(head);
	aux = head;
	head = tail;
	tail = aux;
}

void	ft_rev_rotation(t_list *tail)
{
	t_list *aux;
	t_list *head;

	head = ft_find_head(tail);
	aux = tail;
	tail = head;
	head = aux;
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