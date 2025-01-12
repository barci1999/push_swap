/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 11:45:43 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-17 11:45:43 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	int		i;

	stack_a = NULL;
	if (argc < 3)
	{
		ft_putstr_fd("Error: Not enough arguments.\n", 2);
		return (1);
	}
	i = 1;
	if (!comprove_num_argv(argc, argv))
	{
		ft_putstr_fd("Error: Not all the arguments are numbers.\n", 2);
		return (1);
	}
	if (comprove_order_argv(argc, argv))
	{
		ft_putstr_fd("Error: The numbers are already in order.\n", 2);
		return (1);
	}
	if (!comprove_dup_argv(argc, argv))
	{
		ft_putstr_fd("Error: There are duplicate numbers.\n", 2);
		return (1);
	}
	while (i < argc)
	{
		insert_stack(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	ra(&stack_a);
	print_list(stack_a);
	return (0);
}
