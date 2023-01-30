/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:03:04 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
}
