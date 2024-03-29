/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-arpe <mde-arpe@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:10:09 by mde-arpe          #+#    #+#             */
/*   Updated: 2022/08/22 04:02:44 by mde-arpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_double_ptr(char **ptr)
{
	int	counter;

	if (ptr)
	{
		counter = 0;
		while (ptr[counter])
		{
			free(ptr[counter]);
			counter++;
		}
		free(ptr);
	}
}

//opp 0 for <
//else for >
int	op(int a, int b, int opp)
{
	if (opp == 0)
		return (a < b);
	return (a > b);
}

void	swap(int arr[2])
{
	int	aux;

	aux = arr[0];
	arr[0] = arr[1];
	arr[1] = aux;
}
