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

	// t_node *stack_b;
	stack_a = NULL;
	// stack_b = NULL;
	if (argc < 2)
	{
		ft_printf("ERROR: please insert the correct number of arguments\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if(ft_str_isdigit(argv[i]))
			insert_stack(&stack_a, ft_atoi(argv[i]));
		else
		{
			ft_printf("ERROR : please insert only numbers\n");
			return(1);
		}
		i++;
	}
	print_list(stack_a);
	return (0);
}
