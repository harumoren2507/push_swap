/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_4_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:43 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/17 20:08:13 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min_value(t_stack *stack)
{
	t_stack	*temp_list;
	int		min_value;

	if (!stack)
		return (0);
	temp_list = stack;
	min_value = temp_list->value;
	while (temp_list)
	{
		if (temp_list->value < min_value)
			min_value = temp_list->value;
		temp_list = temp_list->next;
	}
	return (min_value);
}

int	get_min_index(t_stack *stack)
{
	int		min_index;
	t_stack	*temp_list;

	if (!stack)
		return (0);
	temp_list = stack;
	min_index = temp_list->index;
	while (temp_list)
	{
		if (temp_list->index < min_index)
			min_index = temp_list->index;
		temp_list = temp_list->next;
	}
	return (min_index);
}
