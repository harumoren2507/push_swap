/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:36:20 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/16 20:00:46 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack **a)
{
	if (a == NULL || (*a)->next == NULL || (*a)->next->next == NULL)
		return ;
	if ((*a)->value > (*a)->next->value)
		ft_sa(a);
	if ((*a)->next->value > (*a)->next->next->value)
		reverse_rotate_a(a);
	if ((*a)->value > (*a)->next->value)
		ft_sa(a);
}
