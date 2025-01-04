/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:40:29 by retoriya          #+#    #+#             */
/*   Updated: 2024/04/23 22:07:36 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_stack	*ft_lstnew_int(int	value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->value = value;
    new_node->index = NOT_INDEXED;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}


/*
int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;
	t_list	*new_node;
	t_list	*current;

	head = ft_lstnew_int(42);
	second = ft_lstnew_int(2147483647);
	third = ft_lstnew_int(-2147483648);
	head->next = second;
	second->next = third;
	third->next = NULL;
	new_node = ft_lstnew_int(-114);
	new_node->next = NULL;
	printf("List before adding new node:\n");
	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
	ft_lstadd_back(&head, new_node);
	printf("List after adding new node:\n");
	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
	current = head;
	t_list *tmp;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		tmp = NULL;
	}
}
*/
