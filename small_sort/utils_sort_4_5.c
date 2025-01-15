/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_4_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:43 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/15 11:06:20 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *find_min(t_stack *stack)
{
	t_stack	*current;
	t_stack	*min;

	current = stack;
	min = stack;
	while (current)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return (min);
}

int	is_top_half(t_stack *stack, t_stack *target)
{
	t_stack	*current;
	int		position;
	int		size;

	current = stack;
	position = 0;
	size = 0;
	while (current)
	{
		size++;
		if (current == target)
			position = size;
		current = current->next;
	}
	return (position <= size / 2);
}
