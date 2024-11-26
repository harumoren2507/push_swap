#include <stdio.h>
#include <stdlib.h>

/*

したがって、ダブルポインタにする主な理由は：

リストが空（NULL）の場合に、main関数のheadポインタを新しいノードに更新できるようにするため
一貫性のある関数インターフェースを提供するため（空のリストの場合も、空でないリストの場合も同じ関数で扱える）

これが、多くのリンクドリスト実装でadd系の関数がダブルポインタを使用する理由


void ft_lstadd_back(t_list *lst, t_list *new)
{
    if (lst == NULL)
        lst = new;     //lstが空=NULLの場合、この変更はmainのheadには影響しない。 引数を**lstにした上で*lst = newとする必要がある。
    else
        ft_lstlast(lst)->next = new;
}

*/



typedef struct s_list
{
        int                             content;
        int                             index;
        struct s_list   *next;
}                               t_list;


t_list	*ft_lstnew_int(int	content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

t_list* ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst == NULL)
	    *lst = new;
    else
    {
	    ft_lstlast(*lst)->next = new;
    }
}

int	main(void)
{
	t_list	*head;
	/*
	t_list	*second;
	t_list	*third;

	*/
	t_list	*new_node;
	t_list	*current;
	head = NULL;
	/*
	second = ft_lstnew_int(2147483647);
	third = ft_lstnew_int(-2147483648);
	head->next = second;
	second->next = third;
	third->next = NULL;
	*/
	new_node = ft_lstnew_int(-114);
	new_node->next = NULL;
	printf("List before adding new node:\n");
	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
	ft_lstadd_back(&head, new_node);
	printf("List after adding new node:\n");
	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}

