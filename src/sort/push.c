/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/08 10:22:40 by lisa             ###   ########.fr       */
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
	return ;
}
