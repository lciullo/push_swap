#include "../../headers/push_swap.h"

void	reverse_rotate(t_list **lst)
{
    t_list	*last;
    t_list  *first;

	first = (*lst);
    last = ft_lstlast(*lst);
	while ((*lst)->next->next != NULL)
	{
		(*lst) = (*lst)->next;
	}		
	ft_printf("\nafter : \n");
	list_print(*lst);
	(*lst)->next = NULL;
	ft_printf(" last->content %d\n", last->content);
	(*lst) = last;
	last->next = first;
	ft_printf(" last->next %d\n", last->next->content);
}

void	rr_a(t_list **a)
{
	//len < 2 return
    
	reverse_rotate(a);
    return ;
}

void	rr_b(t_list **b)
{
	//len < 2 return
	reverse_rotate(b);
    return ;
}

void	rrr_rotate(t_list **a, t_list **b)
{
	//len < 2 return
	rr_a(a);
	rr_b(b);
	return ;
}