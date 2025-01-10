#include "../includes/push_swap.h"

int get_max_bit(t_stack *stack)
{
    int     max;
    int     max_bits;
    t_stack *current;

    max = 0;
    current = stack;
    while (current)
    {
        if (current->index > max)
            max = current->index;
        current = current->next;
    }
    max_bits = 0;
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}


void    radix_sort(t_stack **stack_a, t_stack **stack_b)
{
    int max_bits;
    int stack_size;
    int i;
    int j;

    max_bits = get_max_bit(*stack_a);
    stack_size = ft_lstsize(*stack_a);
    i = 0;
    j = 0;

    while (i < max_bits)
    {
        while (j < stack_size)
        {
            if ((((*stack_a)->index >> i) & 0x1) == 0x1)
                rotate_a(stack_a);
            else
                push_to_b(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            push_to_a(stack_a, stack_b);
        i++;
    }
}
