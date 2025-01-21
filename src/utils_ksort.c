/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ksort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-21 11:08:44 by pablalva          #+#    #+#             */
/*   Updated: 2025-01-21 11:08:44 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	insert_to_b_range(t_node **stack_a,t_node **stack_b,int digits)
{
	int i;
	int range;

	i = 0;
	range = ft_sqrt(digits) *  7 / 5;
	while (*stack_a)
	{
		if((*stack_a)->index <= i)
		{
			pb(stack_b,stack_a);
			if(list_size(*stack_b) > 1)
				rb(stack_b);
			i++;
		}
		else if((*stack_a)->index <= i + range)
		{
			pb(stack_b,stack_a);
			i++;
		}
		else
			ra(stack_a);
	}
	
}
int rb_counter(t_node *stack_b,int max_index)
{
	int i ;
	i = 0;
	while (stack_b != NULL && stack_b->index != max_index) 
	{
		stack_b = stack_b->next;
		i++;
	}
	return(i);
	
}
void	k_sort(t_node **stack_a, t_node **stack_b, int digits)
{
	int rb_count;
	int rrb_count;

	insert_to_b_range(stack_a,stack_b,digits);
	while ((digits - 1) >= 0)
	{
		rb_count = rb_counter((*stack_b),(digits - 1));
		rrb_count = digits - rb_count;
		if(rb_count <= rrb_count)
		{
			while ((*stack_b)->index != (digits - 1))
				rb(stack_b);
			pa(stack_a,stack_b);
			digits--;
		}
		else
		{
			while ((*stack_b)->index != (digits - 1))
				rrb(stack_b);
			pa(stack_a,stack_b);
			digits--;
		}

	}
}
