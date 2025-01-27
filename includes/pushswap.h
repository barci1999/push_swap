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
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_node
{
	int				value;
	struct t_node	*next;

	int				index;
}					t_node;

/* List functions                                             */
/* ********************************************************** */
t_node				*new_node(int value);
void				add_front(t_node **lst, t_node *insert);
void				add_back(t_node **lst, t_node *insert);
void				delete_node(t_node **lst, int compare);
void				free_lst(t_node **lst);
void				print_list(t_node *list);
int					list_size(t_node *lst);

/* Movements functions                                        */
/* ********************************************************** */
void				pa(t_node **stack_a, t_node **stack_b, bool flag);
void				pb(t_node **stack_b, t_node **stack_a, bool flag);
void				sa(t_node **stack_a, bool flag);
void				sb(t_node **stack_b, bool flag);
void				ss(t_node **stack_a, t_node **stack_b);
void				ra(t_node **stack_a, bool flag);
void				rb(t_node **stack_b, bool flag);
void				rr(t_node **stack_a, t_node **stack_b);
void				rra(t_node **stack_a, bool flag);
void				rrb(t_node **stack_b, bool flag);
void				rrr(t_node **stack_a, t_node **stack_b);

/* Arguments control functions                                */
/* ********************************************************** */
void				insert_stack(t_node **stack_a, char **num);
void				comprove_order_argv(int argc, char **argv);
void				comprove_num_argv(char **argv, t_node **stack);
void				comprove_dup_argv(t_node **stack_a);
void				fun_error(t_node **stack_a);
void				comprove_int(char **num, t_node **stack_a);
void				free_matrix(char **num);

/* Algorithm functions                                        */
/* ********************************************************** */
void				assig_index(t_node **stack_a);
bool				is_sorted(t_node **stack_a);
t_node				*biggest_node(t_node **stack_a);
int					detect_index_position(t_node **stack_a, int index);
void				sort_three_node(t_node **stack_a);
void				sort_four_node(t_node **stack_a, t_node **stack_b);
void				sort_five_node(t_node **stack_a, t_node **stack_b);
void				k_sort(t_node **stack_a, t_node **stack_b, int digits);
/* Bonus function                                             */
/* ********************************************************** */
void				moves(t_node **stack_a, t_node **stack_b, char *line);

#endif
