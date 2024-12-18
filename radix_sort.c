#include "includes/push_swap.h"

nt get_max_bit(t_stack *stack)
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
