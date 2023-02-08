/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/08 14:22:02 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"
/*3 4 5 and big radix*/

void sort_three(t_list **lst)
{
	int		a;
	int		b;
	int		c;
	t_list	*copy;

	copy = *lst;
	a = copy->index;
	b = copy->next->index;
	c = copy->next->next->index; 
	if (a < b && a < c && b > c) // a = 0 b = 2 c = 1
	{
		rvr_a(&copy);
		swap_a(copy);
	}
	else if (c < a && c < b && a > b) // a = 2 b = 1 c =0
	{
		rotate_a(&copy);
		swap_a(copy);
	}
	else if (b < a && b < c && a > c) // a = 2 b = 0 c = 1
		rotate_a(&copy);
	else if (c < a && c < b && b > a) // a = 1 b = 2 c = 0
		rvr_a(&copy);
	else if (b < a && b < c && c > a) // a = 1 b - 0 c = 2
		swap_a(copy);
}



void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	t_list	*copy_a;
	t_list	*copy_b;

	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	copy_a = *a;
	copy_b = *b;
	ft_printf("before sort five\n");
	list_print(*a);
	if (len->stack_a == 2)
		swap_a(copy_a);
	if (len->stack_a == 3)
		sort_three(&copy_a);
	if (len->stack_a == 4)
		sort_four(&copy_a, &copy_b);
	list_print(*a);
	return ;
}
