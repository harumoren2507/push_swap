/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 05:55:04 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/16 20:08:35 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	core_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		stack_size;

	stack_b = NULL;
	stack_size = ft_lstsize(*stack_a);
	if (stack_size <= 5)
	{
		small_sort(stack_a);
		return (0);
	}
	add_index_to_stack(stack_a);
	radix_sort(stack_a, &stack_b);
    debug_sort(stack_a);
	return (0);
}
