/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 17:24:10 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (b == 0 || *b == 0)
		return ;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
	ft_printf("pa\n");
	return ;
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (a == 0 || *a == 0)
		return ;
	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
	ft_printf("pb\n");
	return ;
}
