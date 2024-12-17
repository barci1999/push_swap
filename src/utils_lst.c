/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 12:18:02 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-16 12:18:02 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

t_node	*new_node(int value)
{
	t_node	*new_node;

	new_node = malloc(1 * sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	add_front(t_node **lst, int value)
{
	t_node	*node;

	if (!lst)
		return ;
	node = new_node(value);
	node->next = *lst;
	*lst = node;
}

void	add_back(t_node **lst, int value)
{
	t_node	*node;
	t_node	*reference;

	node = new_node(value);
	if (!*lst)
		*lst = node;
	else
	{
		reference = *lst;
		while (reference->next != NULL)
		{
			reference = reference->next;
		}
		reference->next = node;
	}
}

void	delete_node(t_node **lst, int compare)
{
	t_node	*now;
	t_node	*prev;

	if (*lst == NULL)
		return ;
	now = *lst;
	prev = NULL;
	while (now && now->value != compare)
	{
		prev = now;
		now = now->next;
	}
	if (!now)
		return ;
	if (prev == NULL)
	{
		*lst = now->next;
	}
	else
	{
		prev->next = now->next;
	}
	free(now);
}

int	list_size(t_node *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}