/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 14:31:13 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	len->stack_a = ft_lstsize(*a);
	ft_printf("a len %d\n", len->stack_a);
	len->stack_b = ft_lstsize(*b);
	ft_printf("b len %d\n", len->stack_b);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("======\n");
	ft_printf("b : \n");
	list_print(*b);
	if (len->stack_a == 2)
		swap_a(*a);
	return ;
}
