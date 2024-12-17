/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:31:06 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:31:06 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*to_move;

	if (*stack_b == NULL)
		return ;
	to_move = *stack_b;
	*stack_b = (*stack_b)->next;
	add_front(stack_a, to_move);
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	t_node	*to_move;

	if (*stack_a == NULL)
		return ;
	to_move = *stack_a;
	*stack_a = (*stack_a)->next;
	add_front(stack_b, to_move);
}
