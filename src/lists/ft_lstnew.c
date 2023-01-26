/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:34:34 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/20 15:46:54 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*tab;

	tab = malloc(sizeof(t_list));
	if (!tab)
		return (NULL);
	tab->content = content;
	tab->next = NULL;
	return (tab);
}
