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
#endif
