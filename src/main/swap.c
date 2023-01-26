/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:26:19 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/26 11:28:13 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	ft_swap(t_list *a)
{
	int		tmp;

    /*if (ft_lstsize(a) < 2)
        return ;
	if (!a && !a->next)
		return ;*/
	tmp = a->content;
	a->content = a->next->content;
	a->next->content = tmp;
    return ;
}


void    ft_swap_ss(t_list *a, t_list *b)
{
    /*if (ft_lstsize(a) < 2 || ft_lstsize(b) < 2)
        return ;*/
    ft_swap(a);
    ft_swap(b);

    return ;
}