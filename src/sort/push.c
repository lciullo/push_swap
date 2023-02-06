/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:36:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 12:46:34 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = 0;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	return ;
}

void	push_b(t_list **b, t_list **a)
{
	t_list	*tmp;

	tmp = 0;
	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	return ;
}
