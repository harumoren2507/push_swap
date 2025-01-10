#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/************stack***************/

typedef struct s_stack
{
        int                             value;
	    int	index;
        struct s_stack   *next;
}                               t_stack;


#define NOT_INDEXED -1


typedef enum s_error {
	SUCCESS = 0,
	ERROR = -1,
} t_error;


/**********prototype************/
int	ft_lstsize(t_stack *lst);
int  ft_check_args(int argc, char **argv);
t_stack	*ft_lstnew_int(int value);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int	ft_lstclear2(t_stack **lst);
t_stack	*ft_lstlast(t_stack *lst);
bool	issort_number(t_stack *lst);
void    radix_sort(t_stack **stack_a, t_stack **stack_b);

int core_sort(t_stack **stack_a);

void    add_index_to_stack(t_stack **stack);

void    push_to_a(t_stack **stack_a, t_stack **stack_b);
void    push_to_b(t_stack **stack_a, t_stack **stack_b);

void    rotate_a(t_stack **stack_a);
void    rotate_b(t_stack **stack_b);

void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_sb(t_stack **stack_b);
void	ft_sa(t_stack **stack_a);

void    debug_sort(t_stack **stack_a);
#endif
