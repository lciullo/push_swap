/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_lsts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:59:39 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 16:11:32 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	clear_lsts(t_list **lst)
{
	t_list	*copy;
	t_list	*following;

	if (!lst)
		return ;
	copy = *lst;
	while (copy)
	{
		following = copy->next;
		free(copy);
		copy = following;
	}
	*lst = NULL;
	return ;
}
