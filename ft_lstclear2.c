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

