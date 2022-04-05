/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_parse_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:12:28 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/05 18:58:25 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//review situations longer and smaller than max int
t_node	*ft_parse_args(int argc, char **argv) 
{
	t_node *a_head;

	a_head = ft_split_to_stack(argc, argv);
	if (!a_head)
		return (NULL);
	if (ft_dup_check(a_head))
	{
		ft_lstclear(&a_head);
		return (NULL);
	}
	return (a_head);
}

t_node *ft_split_to_stack(int argc, char **argv)
{
	t_node	*node;
	t_node	*head;
	char	**str;
	int		i;

	str = NULL;
	i = 1;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (!str)
			return (NULL);
		if (!ft_strvalid(str))
		{
			ft_free(str);
			return (NULL);
		}
		node = ft_atoiton(str);
		if (!node)
			return (NULL);
		ft_free(str);
		i++;
	}
	head = ft_find_head(node);
	return (head);
}

int	ft_strvalid(char **str)
{
	int	j;
	int	i;

	j = 0;
	while (str[j])
	{
		i = 0;
		if (str[j][0] == '+' || str[j][0] == '-')
			i++;
		while (str[j][i])
		{
			if (!ft_isdigit(str[j][i]))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

t_node *ft_atoiton(char **str)
{
	t_node	*tmp;
	static t_node	*tmp2;
	long	res;
	int	j;

	j = 0;
	while (str[j])
	{
		res = ft_atoi(str[j]);
		if (res > 2147483647 || res < -2147483648)
			return (NULL);
		tmp = initnode(res);
		if (tmp2)
			tmp2->next = tmp;
		tmp->prev = tmp2;
		tmp2 = tmp;
		j++;
	}
	return (tmp);
}

void	ft_free(char **str)
{
	int	j;

	j = 0;
	while(str[j])
	{
		free(str[j]);
		j++;
	}
	free(str);
	return ;
}

int	ft_dup_check(t_node *ptr)
{
	t_node	*aux;

	while (ptr != NULL)
	{
		aux = ptr->next;
		while (aux != NULL)
		{
			if (aux->nb == ptr->nb)
				return (1);
			aux = aux->next;
		}
		ptr = ptr->next;
	}
	return (0);
}