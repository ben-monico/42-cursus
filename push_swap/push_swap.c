/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:10:26 by bcarreir          #+#    #+#             */
/*   Updated: 2022/04/01 18:21:50 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack *initstack(int size)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = size;
	return (stack);
}





int main()
{
	int c;
	int i = -1;
	int arr[] = {3, 4, 0, 6, 2, 1 , 90, 89, 27, 10};



	t_list *head;
	t_list *tmp;
	t_list *tmp2;
	
	c = 10;
	tmp2 = NULL;
	while(++i < c)
	{
		tmp = initnode(arr[i]);
		if (tmp2 != NULL)
			tmp2->next = tmp;
		tmp->prev = tmp2;
		printf("cpy:%d \n", tmp->nb);
		tmp2 = tmp;
	}
	head = ft_find_head(tmp);
	printf("Tmp point to nb (%d)\n", tmp->nb);
	printf("Tmp2 point to nb (%d)\n", tmp2->nb);
	printf("head nb = (%d)\n", head->nb);
	

}