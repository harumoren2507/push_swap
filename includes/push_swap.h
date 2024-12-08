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
int	ft_lstsize(t_list *lst);
int  ft_check_args(int argc, char **argv);
t_list	*ft_lstnew_int(int content);
#endif
