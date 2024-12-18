/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:31:19 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:31:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"pushswap.h"

void sa(t_node **stack_a)
{
	if(!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
	{
		return;
	}
	t_node *temp_1;
	t_node *temp_2;
	temp_1 = *stack_a;
	temp_2 = temp_1->next;
	
	temp_1->next = temp_2->next;
	*stack_a = temp_2;
	temp_2->next = temp_1;
}
void sb(t_node **stack_b)
{
	if(!stack_b || *stack_b == NULL || (*stack_b)->next == NULL)
	{
		return;
	}
	t_node *temp_1;
	t_node *temp_2;
	temp_1 = *stack_b;
	temp_2 = temp_1->next;
	
	temp_1->next = temp_2->next;
	*stack_b = temp_2;
	temp_2->next = temp_1;
}