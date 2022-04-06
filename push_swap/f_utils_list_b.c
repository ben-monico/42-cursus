/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils_list_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:05:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/06 17:11:08 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist(t_stack *stack)
{
	t_node *ptr;

	ptr = stack->head;
	while (ptr != NULL)
	{
		ft_putnbr(ptr->nb);
		write(1, "\n", 1);
		ptr = ptr->next;
	}
}