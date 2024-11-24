
int  ft_isnum(char *nb)
{
  int  i;

  i = 0;
  if (nb[i] = '-')
    i++;
  while (nb[i])
  {
    if (!ft_isdigit(nb[i]))
      return (1);
    i++;
  }
  return (0);
}


int  ft_dupcheck_num(int tmp, char **args, int i)
{
  i++;
  while (args[i])
  {
    if (tmp == ft_atoi(args[i]))
      return (0);
    i++;
  }
  return (1);
}


void  ft_check_args(int argc, char **argv)
{
  char **args;
  int  i;
  long tmp;

  i = 0;
  tmp　= 0;
  if (argc == 2)
    args = ft_split(args, ' ');
  else 
  {
    i = 1;
    args = argv;
  }
  while (args[i])
  {
    tmp = ft_atoi(args[i]);
    if (!ft_isnum(args[i]))
      return ;
    if (ft_dupcheck_num(tmp, args, i))
      return ;
    if (tmp > 2147483647 || tmp < -2147483648)
      return ;
    i++;
  }
  if (argc == 2)
    //ft_free(args);
}


/*
  checkpoint

  数字の重複
  数字でないものが含まれている
  オーバーフロー処理
*/
