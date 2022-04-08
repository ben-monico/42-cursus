/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils_list_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:05:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/07 21:22:00 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist(t_stack *astk, t_stack *bstk)
{
	t_node *aptr;
	t_node *bptr;

	aptr = astk->head;
	bptr = bstk->head;
	while (aptr)
	{
		ft_putnbr(aptr->nb);
		write(1, "	", 1);
		write(1, "\n", 1);
		aptr = aptr->next;
	}
}