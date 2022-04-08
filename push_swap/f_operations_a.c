/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_operations_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:41:14 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/07 21:06:21 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node *node)
{
	int	aux;

	if (!node || node->next == NULL)
		return;
	aux = node->nb;
	node->nb = node->next->nb;
	node->next->nb = aux;
}
void	ft_push(t_stack *stack, t_stack *stackaux)
{

}

void	ft_rotation(t_stack *stack)
{

}

void	ft_rev_rotation(t_stack *stack)
{

}

void	ft_sa(t_stack *a_stack)
{
	ft_swap(a_stack->head);
	ft_putstr("sa\n");
}

void	ft_sb(t_stack *b_stack)
{
	ft_swap(b_stack->head);
	ft_putstr("sb\n");
}

void	ft_ss(t_stack *a_stack, t_stack *b_stack)
{
	ft_sa(a_stack);
	ft_sb(b_stack);
	ft_putstr("ss\n");
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