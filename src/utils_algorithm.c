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

bool	is_sorted(t_node **stack_a)
{
	t_node	*current;

	current = *stack_a;
	while (current != NULL && current->next != NULL)
	{
		if (current->index < current->next->index)
			current = current->next;
		else
			return (0);
	}
	return (1);
}

t_node	*biggest_node(t_node **stack_a)
{
	t_node	*biggest_node;
	t_node	*current;

	current = *stack_a;
	biggest_node = *stack_a;
	while (current != NULL)
	{
		if (current->index > biggest_node->index)
			biggest_node = current;
		current = current->next;
	}
	return (biggest_node);
}

int	detect_index_position(t_node **stack_a, int index)
{
	int		count;
	t_node	*current;

	count = 1;
	current = *stack_a;
	while (current != NULL && current->index != index)
	{
		count++;
		current = current->next;
	}
	return (count);
}
