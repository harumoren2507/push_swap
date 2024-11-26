#include "includes/push_swap.h"

//ccw lst_utils.c push_swap.c check_args.c libft/libft.a  11/26時点でのコンパイルオプション

static void init_stack(t_list **stack_a, int argc, char **argv)
{
  t_list *new;
  char **args;
  int i;
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


int main(int argc, char **argv)
{
  t_list **stack_a;
  //t_list **stack_b;

  if (argc < 2)
    return (1);
  ft_check_args(argc, argv);
  stack_a = malloc(sizeof(t_list));
  stack_a = malloc(sizeof(t_list));//  なぜt_list の大きさで良いのか。
  *stack_a = NULL;
  //*stack_b = NULL;

  init_stack(stack_a, argc, argv);
  t_list *current;
  current = *stack_a;
  while (current != NULL)
  {
	  printf("%d\n", current->content);
	  current = current->next;
  }
  return (0);
}

/*

typedef struct s_list
{
        int                             value;
        int                             index;
        struct s_list   *next;
}                               t_list;


t_list *stack_a;

stack_a = &t_list stack_a;
//  一つの構造体自体のアドレスを指している。

t_list **stack_a;

stack_a = &*stack_a;
//上記構造体ポインタstack_aのアドレスを指している。


*/
