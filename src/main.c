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

static void	free_matrix(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}

static void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	len;

	comprove_dup_argv(stack_a);
	assig_index(stack_a);
	len = list_size(*stack_a);
	if (!is_sorted(stack_a))
	{
		if (list_size(*stack_a) == 2)
			sa(stack_a, true);
		else if (list_size(*stack_a) == 3)
			sort_three_node(stack_a);
		else if (list_size(*stack_a) == 4)
			sort_four_node(stack_a, stack_b);
		else if (list_size(*stack_a) == 5)
			sort_five_node(stack_a, stack_b);
		else
			k_sort(stack_a, stack_b, len);
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;
	char	**num;

	num = NULL;
	i = 1;
	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		return (0);
	while (argv[i] != NULL)
	{
		num = ft_split(argv[i], ' ');
		comprove_num_argv(num, &stack_a);
		comprove_int(num, &stack_a);
		insert_stack(&stack_a, num);
		free_matrix(num);
		i++;
	}
	push_swap(&stack_a, &stack_b);
	free_lst(&stack_a);
	return (0);
}
