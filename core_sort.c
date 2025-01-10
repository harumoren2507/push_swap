#include "includes/push_swap.h"

int core_sort(t_stack **stack_a)
{
	t_stack *stack_b;
	int	stack_size;
    
	stack_b = NULL;
	stack_size = ft_lstsize(*stack_a);

    add_index_to_stack(stack_a);
    /*
	if (stack_size <= 3)
		sort_three(a);
	if (stack_size <= 5)
		sort_three(a, b);
    */
	radix_sort(stack_a, &stack_b);
    return (0);
}
