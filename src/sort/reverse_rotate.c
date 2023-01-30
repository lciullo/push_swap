/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:32:35 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:08:21 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*first;

	first = (*stack);
	last = ft_lstlast(*stack);
	while ((*stack)->next->next != NULL)
	{
		(*stack) = (*stack)->next;
	}		
	(*stack)->next = NULL;
	(*stack) = last;
	last->next = first;
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
