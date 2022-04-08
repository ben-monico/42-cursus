/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:10:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/07 21:14:43 by benmonico        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksort(t_stack *stack)
{
	t_node *ptr;

	ptr = stack->head;
	while (ptr->next != NULL)
	{
		if (ptr->nb > ptr->next->nb)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

void	ft_algorithm(t_stack *astk, t_stack *bstk)
{
	bstk->size = 0;
	ft_printlist(astk, bstk);
	if (ft_checksort(astk))
	{
		ft_putstr("Sorted baby\n");
		return ;
	}
	ft_sa(astk);
	ft_printlist(astk, bstk);
}

int main(int argc, char **argv)
{
	t_ps	ps;

	if (!(ps.a = ft_initstack(0)) || !(ps.b = ft_initstack(0)))
	{
		ft_putstr("Stack Error\n");
		return (0);
	}	
	if (argc == 1 || !(ps.a->head = ft_parse_args(argc, argv)))
	{
		ft_putstr("Parsing Error\n");
		free(ps.a);
		free(ps.b);
		return (0);
	}
	ft_algorithm(ps.a, ps.b);
 	// system("leaks -- a.out");
}