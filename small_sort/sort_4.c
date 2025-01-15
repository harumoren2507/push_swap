/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:31 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/15 11:08:34 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_4(t_stack *a, t_stack *b)
{
	t_stack	*min;

	min = find_min(a);
	while (a->value != min->value)
	{
		if (is_top_half(a, min))
			rotate_a(&a);
		else
			reverse_rotate_a(&a);
	}
	push_to_b(&a, &b);
	sort_3(a);
	push_to_a(&a, &b);
}
