/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 20:48:54 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-16 20:48:54 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <pushswap.h>

void	free_lst(t_node **lst)
{
	t_node	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}

void	print_list(t_node *list)
{
	t_node	*now;

	now = list;
	while (now)
	{
		ft_printf("%d ->", now->value);
		now = now->next;
	}
	ft_printf("NULL\n");
}
