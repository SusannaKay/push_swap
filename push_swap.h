/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skayed <skayed@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 01:51:15 by skayed            #+#    #+#             */
/*   Updated: 2025/04/15 08:35:18 by skayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

void				sa(t_node **a);
void				sb(t_node **b);
void				ss(t_node **a, t_node **b);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);
void				ra(t_node **a);
void				rb(t_node **b);
void				rr(t_node **a, t_node **b);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);
int					*parse_prompt(int argc, char **argv, int *array, int *size);
int					check_array(int *array, int size);
void				fill_stack(t_node **a, int *array, int size);
int					*bubble_sort(int *array, int size);
void				free_all(t_node **a, t_node **b, int *array, int mode);
void				radix_sort(t_node **a, t_node **b);
void				sort_stack(t_node **a, t_node **b, int size);
void				free_stack(t_node **stack);

#endif