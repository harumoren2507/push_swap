/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:15:06 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/17 20:15:08 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_index_to_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*min_node;
	int		stack_size;
	int		assigned_index;

	stack_size = ft_lstsize(*stack);
	assigned_index = 0;
	while (assigned_index < stack_size)
	{
		// stackの中で最小のvalueを持つnodeを見つけて、indexを割り振っていく。
		current = *stack;
		min_node = NULL;
		while (current)
		{
			if (current->index == NOT_INDEXED && (!min_node
					|| current->value < min_node->value))
				min_node = current;
			current = current->next;
		}
		min_node->index = assigned_index++;
	}
}
