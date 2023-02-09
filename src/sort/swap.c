/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:26:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 10:21:12 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	ft_swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = tmp;
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
