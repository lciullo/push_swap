/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:32:35 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 09:34:04 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*first;

	first = (*lst);
	last = ft_lstlast(*lst);
	while ((*lst)->next->next != NULL)
	{
		(*lst) = (*lst)->next;
	}		
	(*lst)->next = NULL;
	(*lst) = last;
	last->next = first;
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
