/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_parse_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmonico <benmonico@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:12:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/05 04:12:35 by benmonico        ###   ########.fr       */
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

t_node *ft_split_to_stack(int argc, char **argv)
{
	t_node	*tmp;
	t_node	*tmp2;
	char	**str;
	int		i;
	int		j;

	tmp2 = NULL;
	str = NULL;
	i = 1;
	while (i <= argc)
	{
		str = ft_split(*argv[i]);
		while (*str[j++])
		{
			initnode(*str[j]);
			if (tmp2)
				tmp2->next = tmp;
			tmp->prev = tmp2;
			tmp2 = tmp;
		}
		ft_free(str);
		i++;
	}
	return (tmp);
}

char	**ft_split(char **argv)
{

}

void	ft_free(char **str)
{
	while(*str)
	{
		free(*str);
		*str++;
	}
	free(str);
	return ;
}

int	ft_error_check(t_stack *a_stack)
{
	/* 	int	ac;

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
	} */
	return (0);
}