#include "includes/push_swap.h"

bool	issort_number(t_stack *lst)
{
	while (lst->next != NULL)
	{
		if (lst->value > lst->next->value)
			return (false);
		lst = lst->next;
	}
	return (true);
}
