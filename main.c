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
	if (argc < 2)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (ft_str_isdigit(argv[i]))
			insert_stack(&stack_a, ft_atoi(argv[i]));
		else
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		i++;
	}
	ra(&stack_a);
	print_list(stack_a);
	return (0);
}
