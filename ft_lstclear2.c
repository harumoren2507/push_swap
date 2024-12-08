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
		free(current->value);
    		free(current);
		current = tmp;
	}
	*lst = NULL;
	return (SUCCESS);
}

