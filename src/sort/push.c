/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 16:36:05 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	push_a(t_list **a, t_list **b, t_stack *len)
{
	t_list	*tmp;

	tmp = 0;
	if (len->stack_b < 2)
		return ;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	len->stack_a++;
	len->stack_b--;
	return ;
}

void	push_b(t_list **b, t_list **a, t_stack *len)
{
	t_list	*tmp;

	tmp = 0;
	if (len->stack_a < 2)
		return ;
	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	len->stack_b++;
	len->stack_a--;
	return ;
}
