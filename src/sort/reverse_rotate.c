/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:32:35 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 16:16:09 by lciullo          ###   ########lyon.fr   */
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

void	rvr_a(t_list **a, t_stack *len)
{
	if (len->stack_a < 2)
		return ;
	reverse_rotate(a);
	return ;
}

void	rvr_b(t_list **b, t_stack *len)
{
	if (len->stack_b < 2)
		return ;
	reverse_rotate(b);
	return ;
}

void	rrr_rotate(t_list **a, t_list **b, t_stack *len)
{
	if (len->stack_a < 2 || len->stack_b < 2)
		return ;
	rvr_a(a, len);
	rvr_b(b, len);
	return ;
}
