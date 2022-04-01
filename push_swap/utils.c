/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:20:35 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/01 18:22:40 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *initnode(int i)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->nb = i;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_list	*ft_find_head(t_list *ptr)
{
	while (ptr)
	{
		if (ptr->prev == NULL)
			break ;
		ptr = ptr->prev;
	}
	return (ptr);
}

t_list	*ft_find_tail(t_list *ptr)
{
	while (ptr)
	{
		if (ptr->next == NULL)
			break ;
		ptr = ptr->next;
	}
	return (ptr);
}
