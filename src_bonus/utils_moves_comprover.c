/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis_moves_comprover.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-22 15:44:00 by pablalva          #+#    #+#             */
/*   Updated: 2025-01-22 15:44:00 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

void	moves(t_node **stack_a, t_node **stack_b, char *line)
{
	if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(stack_a, stack_b, false);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(stack_b, stack_a, false);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(stack_a, false);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(stack_b, false);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(stack_a, false);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(stack_b, false);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(stack_a, false);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(stack_b, false);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else
		fun_error(stack_a);
}
