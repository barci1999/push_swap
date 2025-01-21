/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:31:11 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:31:11 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	rra(t_node **stack_a)
{
	t_node	*temp_last;
	t_node	*temp_second_last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp_last = (*stack_a);
	while (temp_last->next != NULL)
	{
		temp_second_last = temp_last;
		temp_last = temp_last->next;
	}
	temp_second_last->next = NULL;
	temp_last->next = (*stack_a);
	*stack_a = temp_last;
	ft_printf("rra\n");
}

void	rrb(t_node **stack_b)
{
	t_node	*temp_last;
	t_node	*temp_second_last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp_last = (*stack_b);
	while (temp_last->next != NULL)
	{
		temp_second_last = temp_last;
		temp_last = temp_last->next;
	}
	temp_second_last->next = NULL;
	temp_last->next = (*stack_b);
	*stack_b = temp_last;
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	rra(stack_a);
	rrb(stack_b);
}
