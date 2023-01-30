/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:26:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 16:08:45 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	ft_swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
	return ;
}

void	swap_ss(t_list *a, t_list *b, t_stack *len)
{
	if (len->stack_a < 2 || len->stack_b < 2)
		return ;
	ft_swap(&a);
	ft_swap(&b);
	return ;
}

void	swap_a(t_list *a, t_stack *len)
{
	if (len->stack_a < 2)
		return ;
	ft_swap(&a);
	return ;
}

void	swap_b(t_list *b, t_stack *len)
{
	if (len->stack_b < 2)
		return ;
	ft_swap(&b);
	return ;
}
