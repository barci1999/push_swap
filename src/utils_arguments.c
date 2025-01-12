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

int	comprove_order_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	comprove_num_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_str_isdigit(argv[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	comprove_dup_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[i + 1]))
			return (0);
		else
			i++;
	}
	return (1);
}
