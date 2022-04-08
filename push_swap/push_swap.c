/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:10:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/08 16:13:02 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algorithm(t_stack *astk, t_stack *bstk)
{
	astk->tail = ft_find_tail(astk->head);
	ft_putstr("| Init stack a and b |\n");
	ft_printlist(astk, bstk);
	if (ft_checksort(astk))
	{
		ft_putstr("Sorted baby\n");
		return ;
	}
	ft_sa(astk);
	ft_printlist(astk, bstk);
	ft_pb(astk, bstk);
	ft_printlist(astk, bstk);
	ft_ra(astk);
	ft_printlist(astk, bstk);
	ft_rra(astk);
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