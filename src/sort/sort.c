/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:20:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 10:18:43 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	sort_three(t_list **lst)
{
	int		a;
	int		b;
	int		c;
	t_list	*copy;

	copy = *lst;
	a = copy->index;
	b = copy->next->index;
	c = copy->next->next->index;
	if (a < b && a < c && b > c)
	{
		rvr_a(&copy);
		swap_a(copy);
	}
	else if (c < a && c < b && a > b)
	{
		rotate_a(&copy);
		swap_a(copy);
	}
	else if (b < a && b < c && a > c)
		rotate_a(&copy);
	else if (c < a && c < b && b > a)
		rvr_a(&copy);
	else if (b < a && b < c && c > a)
		swap_a(copy);
}

static void	sort_four(t_list **a)
{
	int		i;
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

static	void	sort_five(t_list **a)
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

	len->stack_a = ft_lstsize(*a);
	len->stack_b = ft_lstsize(*b);
	copy_a = *a;
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
	return ;
}
