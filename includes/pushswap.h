/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-13 18:32:29 by pablalva          #+#    #+#             */
/*   Updated: 2024-12-13 18:32:29 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf.h"
# include <libft.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_node
{
	int				value;
	struct t_node	*next;

}					t_node;

// funciones de listas:
/* ********************************************************** */
t_node				*new_node(int value);
void				add_front(t_node **lst, t_node *insert);
void				add_back(t_node **lst, t_node *insert);
void				delete_node(t_node **lst, int compare);
int					list_size(t_node *lst);
void				free_lst(t_node **lst);
void				print_list(t_node *list);

// funciones de movimientos:
/* ********************************************************** */
void				insert_stack(t_node **stack_a, int nbr);
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_b, t_node **stack_a);
void				sb(t_node **stack_b);
void				sa(t_node **stack_a);
void				ra(t_node **stack_a);
void				rb(t_node **stack_b);
void				rr(t_node **stack_a, t_node **stack_b);
#endif
