/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:07:19 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/15 06:07:22 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_lstclear2(t_stack **lst)
{
	t_stack	*current;
	t_stack	*tmp;

	if (!lst || !*lst)
		return (SUCCESS);
	current = *lst;
	while (current != NULL)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*lst = NULL;
	return (SUCCESS);
}
