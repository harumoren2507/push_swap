/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:35:47 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/15 11:04:38 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_5(t_stack *a, t_stack *b)
{
	t_stack	*min;
	t_stack	*second_min;

	min = find_min(a);
	while (a->value != min->value)
	{
		if (is_top_half(a, min))
			reverse_rotate_a(&a);
		else
			reverse_rotate_a(&a);
	}
	push_to_b(&a, &b);
	second_min = find_min(a);
	while (a->value != second_min->value)
	{
		if (is_top_half(a, second_min))
			rotate_a(&a);
		else
			reverse_rotate_a(&a);
	}
	push_to_b(&a, &b);
	sort_3(a);
	push_to_a(&a, &b);
	push_to_a(&a, &b);
}
