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

void	insert_stack(t_node **stack_a, char **num)
{
	t_node	*to_insert;
	t_node	*temp;
	int		i;

	i = 0;
	while (num[i] != NULL)
	{
		to_insert = new_node(ft_atoi(num[i]));
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
		i++;
	}
}

void	comprove_num_argv(char **argv, t_node **stack_a)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (argv[i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == ' ' || argv[i][j] == '-'
				|| argv[i][j] == '+')
			{
				j++;
			}
			else
				fun_error(stack_a);
		}
		j = 0;
		i++;
	}
}

void	comprove_dup_argv(t_node **stack_a)
{
	t_node	*current;
	t_node	*temp;

	current = *stack_a;
	while (current != NULL)
	{
		temp = current->next;
		while (temp != NULL)
		{
			if (current->value == temp->value)
				fun_error(stack_a);
			temp = temp->next;
		}
		current = current->next;
	}
}

void	fun_error(t_node **stack)
{
	if (stack != NULL)
		free_lst(stack);
	ft_putstr_fd("Error", 2);
	exit(1);
}

void	comprove_int(char **num, t_node **stack_a)
{
	int		i;
	char	*str;
	long	number;

	i = 0;
	while (num[i] != NULL)
	{
		str = num[i];
		if (str == NULL || *str == '\0')
			fun_error(stack_a);
		number = ft_atol(str);
		if (number > INT_MAX || number < INT_MIN)
			fun_error(stack_a);
		i++;
	}
}
