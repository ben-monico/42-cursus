/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_parse_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:12:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/04 18:42:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse_args(int argc, char **argv) //split args into list & checks for errors
{
	t_stack *a_stack;
	int	i;

	a_stack = ft_split_to_stack(argc, argv);
	if (!a_stack)
		return (NULL);
	if (ft_error_check(a_stack))
		return (NULL);

}

t_stack *ft_split_to_stack(int argc, char **argv)
{
	//t_stack *a_stack;
	int		i;
	int		valid_arg;

	//a_stack = initstack(0);
	if (!a_stack)
		return (NULL);
	i = 1;
	
	while (i <= argc)
	{
		valid_arg = 1;
		initnode(ft_atoi_adp(argv[i], &valid_arg));
		argv[i]
	}
	return (stack_a());
}

int	ft_error_check(t_stack *a_stack)
{
		int	ac;

		ac = 1;
	while (ac < argc)
	{
		if (ft_atoi(*argv[ac]) > 2147483647 || ft_atoi(*argv[ac]) < -2147483648)
			return (1);
		i = 0;
		while (argv[ac][i])
		{
			if ()
		}
		i = ac + 1;
		while (ac < argc)
		{
			if (ft_atoi(*argv[ac]) == ft_atoi(*argv[i]))
				return (1);
			i++;
		}
	}
	return (0);
}