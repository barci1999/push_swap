/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-22 15:32:19 by pablalva          #+#    #+#             */
/*   Updated: 2025-01-22 15:32:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_comprove_moves(t_node **stack_a, t_node **stack_b)
{
	char	*line;

	line = NULL;
	line = get_next_line(0);
	while (line)
	{
		if (line)
		{
			moves(stack_a, stack_b, line);
		}
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (!is_sorted(stack_a))
		ft_printf("OK\n");
	else if (list_size(*stack_a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

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
		i++;
	}
	comprove_dup_argv(&stack_a);
	ft_comprove_moves(&stack_a, &stack_b);
	free_lst(&stack_a);
	free_lst(&stack_b);
	free_matrix(num);
	return (0);
}
