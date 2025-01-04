#include "../includes/push_swap.h"

void    rotate_a(t_stack *stack_a)
{
   t_stack *first;
    t_stack *last;

    if (!*stack_a || !(*stack_a)->next != NULL)
        return ;

    first = *stack_a;
    last = *stack_a;

    while (last->next != NULL)
        last = last->next;
    *stack_a = first->next;
    last->next = first;
    first->next = NULL;
    write(1, "ra\n", 3);
}

void    rotate_b(t_stack *stack_b)
{
    t_stack *first;
    t_stack *last;

    if (!*stack_b || !(*stack_b)->next != NULL)
        return ;

    first = *stack_b;
    last = *stack_b;

    while (last->next != NULL)
        last = last->next;
    *stack_b = first->next;
    last->next = first;
    first->next = NULL;
    write(1, "rb\n", 3);
}

