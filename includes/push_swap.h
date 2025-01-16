/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:03:18 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/16 20:04:36 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

/************stack***************/

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

# define NOT_INDEXED -1

typedef enum s_error
{
	SUCCESS = 0,
	ERROR = -1,
}					t_error;

/**********prototype************/
int					ft_lstsize(t_stack *lst);
int					ft_check_args(int argc, char **argv);
t_stack				*ft_lstnew_int(int value);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
int					ft_lstclear2(t_stack **lst);
t_stack				*ft_lstlast(t_stack *lst);
bool				issort_number(t_stack *lst);
void				radix_sort(t_stack **stack_a, t_stack **stack_b);

int					core_sort(t_stack **stack_a);

void				add_index_to_stack(t_stack **stack);

// operations
void				push_to_a(t_stack **stack_a, t_stack **stack_b);
void				push_to_b(t_stack **stack_a, t_stack **stack_b);
void				rotate_a(t_stack **stack_a);
void				rotate_b(t_stack **stack_b);
void				reverse_rotate_a(t_stack **stack_a);
void				ft_ss(t_stack **stack_a, t_stack **stack_b);
void				ft_sb(t_stack **stack_b);
void				ft_sa(t_stack **stack_a);

// small_sort
void				small_sort(t_stack **stack_a);
void				sort_2(t_stack **a);
void				sort_3(t_stack **a);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);

// small_sort_utils
int					is_top_half(t_stack *stack, t_stack *target);
t_stack				*find_min(t_stack *stack);
void				reverse_rotate_a(t_stack **stack_a);

void				debug_sort(t_stack **stack_a);
#endif
