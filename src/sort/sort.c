/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/07 19:21:20 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"
/*3 4 5 and big radix*/

static void sort_three(t_list **lst)
{
	int		a;
	int		b;
	int		c;
	t_list	*copy;

	copy = *lst;
	a = copy->index;
	b = copy->next->index;
	c = copy->next->next->index; 
	if (a == 0 && b == 2 && c == 1)
	{
		rvr_a(&copy);
		swap_a(copy);
	}
	else if (a == 2 && b == 1 && c == 0)
	{
		rotate_a(&copy);
		swap_a(copy);
	}
	else if (a == 2 && b == 0 && c == 1) //leaks
		rotate_a(&copy);
	else if (a == 1 && b == 2 && c == 0) // leaks
		rvr_a(&copy);
	else if (a == 1 && b == 0 && c == 2)
		swap_a(copy);
	//est ce que je dois free ma copy ?
}

void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	t_list	*copy;

	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	copy = *a;
	list_print(*a);
	if (len->stack_a == 2)
		swap_a(copy);
	if (len->stack_a == 3)
		sort_three(&copy);
	list_print(*a);
	return ;
}
