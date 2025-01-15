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
	char	**num;

	num = NULL;
	i = 1;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	comprove_num_argv(argv, &stack_a);
	while (argv[i] != NULL)
	{
		num = ft_split(argv[i], ' ');
		comprove_int(num, &stack_a);
		insert_stack(&stack_a, num);
		i++;
	}
	comprove_dup_argv(&stack_a);
	// funcion de push_swap
	print_list(stack_a);
	free_lst(&stack_a);
	return (0);
}
