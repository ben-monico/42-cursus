/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:10:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/12 15:41:55 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// list to array. index array. push to list when they are the next index

// void	ft_sort(t_stack *astk, t_stack *bstk)
// {

// }

void	ft_algorithm(t_stack *astk, t_stack *bstk)
{
	astk->tail = ft_find_tail(astk->head);
	ft_putstr("| Init stacks |\n");
	ft_printlist(astk, bstk);
	ft_putnbr(astk->size);
	ft_putstr(" = ps.a size\n");
	ft_setindex(astk);
	// ft_sort(astk, bstk);
	return ;
}

int main(int argc, char **argv)
{
	t_ps	ps;

	if (argc == 1 || !(ps.a = ft_initstack(0)) || !(ps.b = ft_initstack(0)))
	{
		if (ps.a)
			free(ps.a);
		ft_putstr("Error\n");
		return (0);
	}	
	if (!(ft_parse_args(ps.a, argc, argv)))
	{
		ft_putstr("Parsing Error\n");
		free(ps.a);
		free(ps.b);
		return (0);
	}
	if (ft_checksort(ps.a) || !ps.a->head->next)
		return (0);
	ft_algorithm(ps.a, ps.b);
 	// system("leaks -- a.out");
}