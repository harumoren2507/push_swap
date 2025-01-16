/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retoriya <retoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:42:32 by retoriya          #+#    #+#             */
/*   Updated: 2025/01/16 22:44:08 by retoriya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	init_stack(t_stack **stack_a, int argc, char **argv)
{
	t_stack	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew_int(ft_atoi(args[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

static int	print_error(void)
{
	write(2, "Error\n", 6);
	return (ERROR);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

    if (argc < 2 || (argv[1] && argv[1][0] == '\0'))
    { 
        return (0);
    }
	if (ft_check_args(argc, argv) == 1)
		return (print_error());
	stack_a = NULL;
	init_stack(&stack_a, argc, argv);
	if (issort_number(stack_a))
	{
		ft_lstclear2(&stack_a);
		return (SUCCESS);
	}
	core_sort(&stack_a);
	return (SUCCESS);
}

void	debug_sort(t_stack **stack_a)
{
	t_stack	*current;
	int		a;

	current = *stack_a;
	// debug
	while (current != NULL)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	a = ft_lstsize(*stack_a);
	printf("stack_size:%d\n", a);
}

/*
typedef struct s_list
{
		int				value;
		int				index;
		struct s_list	*next;
}						t_list;


t_list					*stack_a;

stack_a = &t_list stack_a;
//  一つの構造体自体のアドレスを指している。

t_list					**stack_a;

stack_a = &*stack_a;
//上記構造体ポインタstack_aのアドレスを指している。


*/
