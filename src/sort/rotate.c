/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:09 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/07 19:22:38 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	rotate(t_list **list)
{
	int		tmp;
	t_list	*copy;

	copy = *list;
	tmp = copy->index;
	while (copy->next)
	{
		copy->index = copy->next->index;
		copy = copy->next;
	}
	copy->index = tmp;
	return ;
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
