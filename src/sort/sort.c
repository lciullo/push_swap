/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 15:39:39 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"
/*3 4 5 and big radix*/


static void	sort_3(t_list **a)
{
	ft_printf("%d\n", (*a)->content);
}

void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	if (len->stack_a == 2)
		swap_a(*a);
	if (len->stack_a == 3)
		sort_3(a);
	list_print(*a);
	return ;
}
