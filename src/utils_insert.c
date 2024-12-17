/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 12:01:19 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-17 12:01:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <pushswap.h>

void	insert_stack(t_node **stack_a, int nbr)
{
	t_node	*to_insert;
	t_node	*temp;

	to_insert = new_node(nbr);
	if (*stack_a == NULL)
	{
		*stack_a = to_insert;
		to_insert->next = NULL;
	}
	else
	{
		temp = *stack_a;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = to_insert;
		to_insert->next = NULL;
	}
}
