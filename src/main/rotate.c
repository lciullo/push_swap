
#include "../../headers/push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	ft_lstadd_back(lst, tmp);
}
void	rotate_a(t_list **a)
{
	//len < 2 return
	rotate(a);
    return ;
}

void	rotate_b(t_list **b)
{
	//len < 2 return
	rotate(b);
    return ;
}

void	rotate_rr(t_list **a, t_list **b)
{
	//len < 2 return
	rotate(a);
	rotate(b);
	return ;
}