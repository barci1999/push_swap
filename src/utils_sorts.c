/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-20 14:37:07 by pablalva          #+#    #+#             */
/*   Updated: 2025-01-20 14:37:07 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	sort_three_node(t_node **stack_a)
{
	t_node	*biggest;

	biggest = biggest_node(stack_a);
	if (biggest == *stack_a)
		ra(stack_a);
	else if ((*stack_a)->next == biggest)
		rra(stack_a);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_four_node(t_node **stack_a, t_node **stack_b)
{
	while (list_size(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0)
		{
			if (detect_index_position(stack_a, 0) <= (list_size(*stack_a) / 2))
				ra(stack_a);
			else
				rra(stack_a);
		}
		if ((*stack_a)->index == 0)
			pb(stack_b, stack_a);
	}
	if (!is_sorted(stack_a))
	{
		sort_three_node(stack_a);
	}
	pa(stack_a, stack_b);
}

void	sort_five_node(t_node **stack_a, t_node **stack_b)
{
	while (list_size(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
		{
			if ((detect_index_position(stack_a, 0) <= (list_size(*stack_a) / 2))
				|| (detect_index_position(stack_a, 1) <= (list_size(*stack_a)
						/ 2)))
				ra(stack_a);
			else
				rra(stack_a);
		}
		if (((*stack_a)->index == 0 || (*stack_a)->index == 1))
			pb(stack_b, stack_a);
	}
	if (!is_sorted(stack_a))
		sort_three_node(stack_a);
	if (is_sorted(stack_b))
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

