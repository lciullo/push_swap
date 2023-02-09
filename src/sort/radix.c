/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:15:02 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 10:18:31 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static int	get_max_index(t_list **a)
{
	t_list			*head;
	unsigned int	max;

	head = *a;
	max = head->index;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	return (max);
}

static int	get_highest_shift(t_list **a)
{
	int	max;
	int	shift;

	max = get_max_index(a);
	shift = 0;
	while (max >> shift != 0)
		shift++;
	return (shift);
}

void	radix_sort(t_list **a, t_list **b, t_stack *len)
{
	int		max_shift;
	int		i;
	int		j;
	t_list	*head;

	max_shift = get_highest_shift(a);
	i = 0;
	head = *a;
	while (i < max_shift)
	{
		j = 0;
		while (j != len->stack_a)
		{
			head = *a;
			if ((head->index >> i) % 2 == 1)
				rotate_a(a);
			else
				push_b(b, a);
			j++;
		}
		while (ft_lstsize(*b) != 0)
			push_a(a, b);
		i++;
	}
}
