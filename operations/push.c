#include "../includes/push_swap.h"

void    push_to_a(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    
    if ((!*stack_b))
        return ;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = *stack_a;
    *stack_a = temp;
    write(1, "pa\n", 3);
}


void    push_to_b(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    
    if ((!*stack_a))
        return ;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = *stack_b;
    *stack_b = temp;
    write(1, "pb\n", 3);
}

/*
//unit test
void    print_stack(t_stack *a, t_stack *b)
{
    printf("Stack A:\n");
    while (a)
    {
        printf("%d\n", a->value);
        a = a->next;
    }
    printf("Stack B:\n");
    while (b)
    {
        printf("%d\n", b->value);
        b = b->next;
    }
    printf("\n\n");
}


t_stack *new_node(int   value)
{
    t_stack *node;

    node = (t_stack *)malloc(sizeof(t_stack));
    if (!node)
        return (NULL);
    node->value = value;
    node->next = NULL;
    return (node);
}

#include <stdio.h>
int main(void)
{
    t_stack *stack_a = NULL;
    t_stack *stack_b = NULL;

    stack_a = new_node(1);
    stack_a->next = new_node(2);
    stack_a->next->next = new_node(3);


    stack_b = new_node(4);
    stack_b->next = new_node(5);
    stack_b->next->next = new_node(6);

    printf("initial state\n");
    print_stack(stack_a, stack_b);

    printf("test:push_to_a\n");
    push_to_a(&stack_a, &stack_b);
    print_stack(stack_a, stack_b);

    printf("test:push_to_b\n");
    push_to_b(&stack_a, &stack_b);
    print_stack(stack_a, stack_b);

    printf("testing push_to_a with empty stack B\n");
    while (stack_b)
        push_to_a(&stack_a, &stack_b);
    print_stack(stack_a, stack_b);

    printf("testing push_to_b with empty stack A\n");
    while (stack_a)
        push_to_b(&stack_a, &stack_b);
    print_stack(stack_a, stack_b);

    return (0);
}
*/
