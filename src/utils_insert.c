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
#include<pushswap.h>
void	insert_stack(t_node **stack_a,int nbr)
{
	add_back(stack_a,nbr);
}