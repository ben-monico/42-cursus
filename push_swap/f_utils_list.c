/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:20:35 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/04 19:04:48 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_a(void)
{
	static t_stack stack;

	return (&stack);
}


t_node *initnode(int i)
{
	t_node *new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = i;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_node	*ft_find_head(t_node *ptr)
{
	while (ptr)
	{
		if (ptr->prev == NULL)
			break ;
		ptr = ptr->prev;
	}
	return (ptr);
}

t_node	*ft_find_tail(t_node *ptr)
{
	while (ptr)
	{
		if (ptr->next == NULL)
			break ;
		ptr = ptr->next;
	}
	return (ptr);
}

void lst_addtail(t_node *ptr, t_stack *stack)
{
	ptr = ft_find_tail();
}