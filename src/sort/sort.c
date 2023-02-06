/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 14:37:45 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"
/*3 4 5 and big radix*/
void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	list_print(*a);
	rotate_a(a);
	list_print(*a);
	return ;
}
