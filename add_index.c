#include "includes/push_swap.h"

void    index_stack(t_stack **stack)
{
    t_stack *current;
    t_stack *min_node;

    int stack_size;
    int assigned_index;

    stack_size = ft_lstsize(*stack);
    assigned_index = 0;

    while (assigned_index < stack_size)
    {
        //stackの中で最小のvalueを持つnodeを見つけて、indexを割り振っていく。
        current = *stack;
        min_node = NULL;
        while (current)
        {
            if (current->index == NOT_INDEXED && (!min_node || current->value < min_node->value))
                min_node = current;
            current = current->next;
        }
        min_node->index = assigned_index++;
    }
}

