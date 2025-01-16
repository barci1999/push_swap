/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 12:31:57 by pablalva          #+#    #+#             */
/*   Updated: 2025-01-16 12:31:57 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	assig_index(t_node **stack_a)
{
	t_node	*temp;
	t_node	*current;
	int		index;

	temp = *stack_a;
	while (temp != NULL)
	{
		index = 0;
		current = *stack_a;
		while (current != NULL)
		{
			if (temp->value > current->value)
				index++;
			current = current->next;
		}
		temp->index = index;
		temp = temp->next;
	}
}
