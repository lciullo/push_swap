/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:59:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 15:34:16 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	list_print(t_list *lst)
{
	while (lst)
	{
		ft_printf("[%d] index = %d\n", lst->content, lst->index);
		lst = lst->next;
	}
	ft_printf("\n");
}
