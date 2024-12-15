/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:31:06 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:31:06 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"pushswap.h"
void	push(t_list **stack_a,void *content)
{
	t_list *new_node = ft_lstnew(content);
	if(!new_node)
		return;
	new_node->next = *stack_a;
	*stack_a = new_node;
}