#include "includes/push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;
	tmp = 0;

	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
}


