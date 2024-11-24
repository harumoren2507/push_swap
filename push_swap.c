#include "includes/push_swap.h"

static void init_stack(t_list **stack_a, int argc, char **argv)
{
  t_list *new;
  char **args;
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
    new = ft_lstnew(ft_atoi(args[i]));
    ft_lstadd_back(stack_a, new);
    i++;
  }
  if (argc == 2)
    //ft_free(args);
}


int main(int argc, char **argv)
{
  t_list **stack_a;
  t_list **stack_b;

  if (argc < 2)
    return (1);
  ft_check_args(argc, argv);
  //wポインタの意味がまだ完全に分かってない。
  stack_a = malloc(sizeof(t_list));
  stack_a = malloc(sizeof(t_list));//  なぜt_list の大きさで良いのか。
  *stack_a = NULL;
  *stack_b = NULL;

  init_stack(stack_a, argc, argv);//たぶん、argvの数字群をstack_aにぶち込む。
  if (//stack_aがそーとされていた場合の処理)
  {
  }
  //sort;
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
