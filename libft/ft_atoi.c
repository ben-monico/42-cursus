/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:18:04 by bcarreir          #+#    #+#             */
/*   Updated: 2022/02/23 18:07:40 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/* #include<time.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double time_spent = 0.0;
	clock_t begin = clock();
	char	arr[] = "       \n 2147483648";
	char	*str = arr;

	printf("mine     %d\n", ft_atoi(str));
	printf("original %d\n", atoi(str));
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC ;
	printf("%f", time_spent);
} */