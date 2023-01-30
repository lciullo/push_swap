/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:09 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:04:01 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
	rotate(a);
	return ;
}

void	rotate_b(t_list **b)
{
	rotate(b);
	return ;
}

void	rotate_rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	return ;
}
