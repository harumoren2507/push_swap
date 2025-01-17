/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:35:47 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/17 19:59:04 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;
	int	stack_size;

	if (!stack_a || !*stack_a)
		return ;
	stack_size = ft_lstsize(*stack_a);
	min_index = get_min_index(*stack_a);
	while ((*stack_a)->index != min_index)
		rotate_a(stack_a);
	push_to_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_to_a(stack_a, stack_b);
}
