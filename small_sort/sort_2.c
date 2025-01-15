/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:53 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/15 11:26:14 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack *a)
{
	if (a == NULL || a->next == NULL)
		return ;
	else if (a->value > a->next->value)
		ft_sa(&a);
    printf("debug_sort2\n");
    debug_sort(&a);
    printf("debug\n");
}
