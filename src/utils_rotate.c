/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:31:16 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:31:16 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	ra(t_node **stack_a, bool flag)
{
	t_node	*temp_first;
	t_node	*temp_last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp_first = *stack_a;
	temp_last = *stack_a;
	while (temp_last->next != NULL)
	{
		temp_last = temp_last->next;
	}
	*stack_a = temp_first->next;
	temp_last->next = temp_first;
	temp_first->next = NULL;
	if (flag == true)
		ft_printf("ra\n");
}

void	rb(t_node **stack_b, bool flag)
{
	t_node	*temp_first;
	t_node	*temp_last;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp_first = *stack_b;
	temp_last = *stack_b;
	while (temp_last->next != NULL)
	{
		temp_last = temp_last->next;
	}
	*stack_b = temp_first->next;
	temp_last->next = temp_first;
	temp_first->next = NULL;
	if (flag == true)
		ft_printf("rb\n");
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ra(stack_a, true);
	rb(stack_b, true);
}
