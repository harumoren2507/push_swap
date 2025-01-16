/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort_4_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:43 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/16 20:11:42 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*find_min(t_stack *stack)
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

int is_top_half(t_stack *stack, t_stack *target)
{
    t_stack *current;
    int position;
    int size;
    
    current = stack;
    position = 1;  // 1からカウント開始
    size = 0;
    
    while (current)
    {
        if (current == target)
            break;
        position++;
        current = current->next;
    }
    
    // サイズを計算
    current = stack;
    while (current)
    {
        size++;
        current = current->next;
    }
    
    // 切り上げ除算で比較
    return (position <= (size + 1) / 2);
}

