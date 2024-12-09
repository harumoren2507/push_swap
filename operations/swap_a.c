#include "includes/push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack *temp;

	if (!*stack_a || !(*stack_a->next)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_a)->next;
	*stack_a->next = temp;
	write(1, "sa\n", 3);
}
	/*

	a[] = {1 2 3}
	temp = *stack_a; temp = 1を指す
	*stack_a = (stack_a)->next; つまり、stack_aの先頭は2になる.
	temp->next = (stack_a)->next;   temp->next = 3; 2を指していたところ、1の次は3になる。
	*stack_a->next(3) = temp; 2の次は1になる。
	*/


