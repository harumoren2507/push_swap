void radix_sort(t_stack **stack_a, t_stack **stack_b)
{
    int     i;
    int     j;
    int     size;
    int     max_bits;
    t_stack *temp;

    i = 0;
    size = ft_lstsize(*stack_a);
    max_bits = get_max_bit(*stack_a);
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            temp = *stack_a;
            if ((temp->index >> i) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            pa(stack_a, stack_b);
        i++;
    }
}
