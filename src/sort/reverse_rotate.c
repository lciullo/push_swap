/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:32:35 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/07 19:23:27 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*copy;
	t_list	*head;
	int		tmp;
	int		pos;

	pos = 0;
	tmp = 0;
	head = *lst;
	copy = *lst;
	while (copy)
	{
		pos = copy->index;
		copy->index = tmp;
		tmp = pos;
		copy = copy->next;
	}
	head->index = pos;
}

void	rvr_a(t_list **a)
{
	reverse_rotate(a);
	return ;
}

void	rvr_b(t_list **b)
{
	reverse_rotate(b);
	return ;
}

void	rrr_rotate(t_list **a, t_list **b)
{
	rvr_a(a);
	rvr_b(b);
	return ;
}
