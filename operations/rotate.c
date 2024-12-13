#include "../includes/push_swap.h"

void	ft_ra(stacktop *a)
{
	t_node	*first;
	t_node	*last;

	if (a->size < 2)
		return ;
	first = a->top;
	a->top = a->top->next;
	last = a->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first-> next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(stacktop *b)
{
	t_node	*first;
	t_node	*last;

	if (b->size < 2)
		return ;
	first = b->top;
	b->top = b->top->next;
	last = b->top;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

