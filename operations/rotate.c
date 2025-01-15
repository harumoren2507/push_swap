#include "../includes/push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack_a || !(*stack_a)->next)
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

void	rotate_b(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack_b || !(*stack_b)->next)
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

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack	*last;
	t_stack	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = last;
	first->next->next = NULL;
	(*stack_a)->next = first;
	write(1, "rra\n", 4);
}

/*
void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

t_stack	*new_node(int value)
{
	t_stack	*newnode;

	newnode = (t_stack *)malloc(sizeof(struct s_stack));
	if (!newnode)
		return (NULL);
	newnode->value = value;
	newnode->next = NULL;
	return (newnode);
}

int	main(void)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = new_node(1);
	stack_a->next = new_node(2);
	stack_a->next->next = new_node(3);
	stack_b = new_node(4);
	stack_b->next = new_node(5);
	stack_b->next->next = new_node(6);
	printf("initial state_stack A\n");
	print_stack(stack_a);
	printf("testing: rotate_a\n");
	rotate_a(&stack_a);
	print_stack(stack_a);
	printf("initial state_stack B\n");
	print_stack(stack_b);
	printf("testing: rotate_b\n");
	rotate_b(&stack_b);
	print_stack(stack_b);
	printf("testing: reverse_rotate_a\n");
	reverse_rotate_a(&stack_a);
	print_stack(stack_a);
	ft_lstclear2(&stack_a);
	ft_lstclear2(&stack_b);
	return (0);
}
*/
