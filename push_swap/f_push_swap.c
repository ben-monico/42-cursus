/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:10:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/06 19:21:09 by bcarreir         ###   ########.fr       */
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

void	ft_algorithm(t_stack *a_stack, t_stack *b_stack)
{
	b_stack->size = 0;
	if (ft_checksort(a_stack))
	{
		ft_putstr("Sorted baby\n");
		return ;
	}
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
	ft_printlist(ps.a);
 	// system("leaks -- a.out");
}