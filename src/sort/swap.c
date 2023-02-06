/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:26:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 14:44:44 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	ft_swap(t_list **stack)
{
	int	tmp;
	int	copy;

	tmp = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = tmp;
	//debug delete
	copy = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = copy;
	return ;
}

void	swap_ss(t_list *a, t_list *b)
{
	ft_swap(&a);
	ft_swap(&b);
	return ;
}

void	swap_a(t_list *a)
{
	ft_swap(&a);
	return ;
}

void	swap_b(t_list *b)
{
	ft_swap(&b);
	return ;
}
