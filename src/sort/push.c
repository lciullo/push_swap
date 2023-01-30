/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 09:41:38 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
}

void	pb(t_list *a, t_list *b)
{
	t_list	*tmp;

	if (a == NULL)
		return ;
	tmp = a->next;
	a->next = b;
	b = a;
	a = tmp;
	return ;
}
