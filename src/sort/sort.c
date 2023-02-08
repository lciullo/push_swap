/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/08 16:12:38 by lisa             ###   ########.fr       */
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

static	void sort_four(t_list **a)
{
	int	i;
	t_list	*b;

	i = 0;
	b = NULL;
	while (i < 1)
	{
		if ((*a)->index == 0)
		{
			push_b(&b, a);
			i++;
		}
		else
		rotate_a(a);
	}
	sort_three(a);
	push_a(a, &b);
}

static	void sort_five(t_list **a)
{
	int		i;
	t_list	*b;

	i = 0;
	b = NULL;
	while (i < 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
		{
			push_b(&b, a);
			i++;
		}
		else
		rotate_a(a);
		
	}
	if (b->index == 0)
		swap_b(b);
	sort_three(a);
	push_a(a, &b);
	push_a(a, &b);
}

void	ft_sort(t_list **a, t_list **b, t_stack *len)
{
	t_list	*copy_a;
	//t_list	*copy_b;

	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	copy_a = *a;
	//copy_b = *b;
	ft_printf("before sort five\n");
	list_print(*a);
	if (len->stack_a == 2)
		swap_a(copy_a);
	if (len->stack_a == 3)
		sort_three(&copy_a);
	if (len->stack_a == 4)
		sort_four(&copy_a);
	if (len->stack_a == 5)
		sort_five(&copy_a);
	if (len->stack_a > 5)
		radix_sort(a, b, len);
	list_print(*a);
	return ;
}
