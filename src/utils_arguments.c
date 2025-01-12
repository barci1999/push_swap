/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 12:01:19 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-17 12:01:19 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <pushswap.h>

void	insert_stack(t_node **stack_a, int nbr)
{
	t_node	*to_insert;
	t_node	*temp;

	to_insert = new_node(nbr);
	if (*stack_a == NULL)
	{
		*stack_a = to_insert;
		to_insert->next = NULL;
	}
	else
	{
		temp = *stack_a;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = to_insert;
		to_insert->next = NULL;
	}
}

void	comprove_order_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			break ;
		i++;
	}
	if (i == argc - 1)
	{
		ft_printf("Error: The numbers are already in order.\n");
		exit(1);
	}
}

void	comprove_num_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_str_isdigit(argv[i]))
			i++;
		else
		{
			ft_printf("Error: Not all the arguments are numbers.\n");
			exit(1);
		}
	}
}

void	comprove_dup_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[i + 1]))
		{
			ft_printf("Error: There are duplicate numbers.\n");
			exit(1);
		}
		else
			i++;
	}
}

void	fun_error(int argc, char **argv)
{
	if (argc < 3)
	{
		ft_printf("Error: Not enough arguments.\n");
		exit(1);
	}
	comprove_num_argv(argc, argv);
	comprove_dup_argv(argc, argv);
	comprove_order_argv(argc, argv);
}
