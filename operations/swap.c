#include "../includes/push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack *temp;

	if (!*stack_a || !((*stack_a)->next))
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = (*stack_a)->next;
	(*stack_a)->next = temp;
	write(1, "sa\n", 3);
}
	/*
	a[] = {1 2 3}
	temp = *stack_a; temp = 1を指す
	*stack_a = (stack_a)->next; つまり、stack_aの先頭は2になる.
	temp->next = (stack_a)->next;   temp->next = 3; 2を指していたところ、1の次は3になる。
	*stack_a->next(3) = temp; 2の次は1になる。
	*/


void	ft_sb(t_stack **stack_b)
{
	t_stack *temp;

	if (!*stack_b || !((*stack_b)->next))
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = (*stack_b)->next;
	(*stack_b)->next = temp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(&*stack_a);
	ft_sb(&*stack_b);
	write(1, "ss\n", 3);
}


/*
t_stack *create_new_node(int value)
{
    t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
    if (!new_node)
        return NULL;
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

// リストの内容を表示する関数
void print_list(t_stack *head, char stack_name)
{
    printf("Stack %c: ", stack_name);
    while (head)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

// メモリ解放関数
void free_stack(t_stack **stack)
{
    t_stack *current;
    t_stack *next;

    current = *stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *stack = NULL;
}

// テスト用のメイン関数
int main(void)
{
    // スタックAのテスト
    t_stack *stack_a = NULL;
    
    // テストケース1: 空のスタック
    printf("Test Case 1: Empty stack\n");
    ft_sa(&stack_a);
    print_list(stack_a, 'A');

    // テストケース2: 1つの要素
    printf("\nTest Case 2: Single element\n");
    stack_a = create_new_node(1);
    print_list(stack_a, 'A');
    ft_sa(&stack_a);
    print_list(stack_a, 'A');

    // テストケース3: 2つの要素
    printf("\nTest Case 3: Two elements\n");
    stack_a->next = create_new_node(2);
    print_list(stack_a, 'A');
    ft_sa(&stack_a);
    print_list(stack_a, 'A');

    // テストケース4: 3つの要素
    printf("\nTest Case 4: Three elements\n");
    stack_a->next->next = create_new_node(3);
    print_list(stack_a, 'A');
    ft_sa(&stack_a);
    print_list(stack_a, 'A');

    // スタックBのテスト
    t_stack *stack_b = NULL;
    
    // 同様のテストをスタックBでも実行
    printf("\nTesting Stack B:\n");
    stack_b = create_new_node(4);
    stack_b->next = create_new_node(5);
    stack_b->next->next = create_new_node(6);
    print_list(stack_b, 'B');
    ft_sb(&stack_b);
    print_list(stack_b, 'B');

    // メモリ解放
    free_stack(&stack_a);
    free_stack(&stack_b);

    //ssのテスト

    return 0;
}
*/
