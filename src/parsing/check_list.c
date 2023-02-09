/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:58:54 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 11:43:39 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	check_dupe(t_list *a)
{
	t_list	*tmp_list;
	int		tmp;

	while (a)
	{
		tmp = a->content;
		a = a->next;
		tmp_list = a;
		while (tmp_list)
		{
			if (tmp == tmp_list->content)
				return (0);
			tmp_list = tmp_list->next;
		}
	}
	return (1);
}

unsigned int	count_index(t_list **lst, int content)
{
	unsigned int	index;
	t_list			*copy;

	index = 0;
	copy = (*lst);
	while (copy)
	{
		if (content > copy->content)
			index++;
		copy = copy->next;
	}
	return (index);
}

void	get_index(t_list **lst)
{
	t_list			*copy;

	copy = (*lst);
	while (copy)
	{
		copy->index = count_index(lst, copy->content);
		copy = copy->next;
	}
	return ;
}

int	is_sorted(t_list **lst)
{
	t_list	*copy;

	copy = (*lst);
	while (copy && copy->next)
	{
		if (copy->index > copy->next->index)
			return (1);
		copy = copy->next;
	}
	return (0);
}

int	parsing_list(t_list **a)
{
	if (check_dupe(*a) == 0)
	{
		clear_lsts(a);
		ft_printf("ERROR\n");
		return (0);
	}
	get_index(a);
	if (is_sorted(a) == 0)
	{
		clear_lsts(a);
		return (0);
	}
	return (1);
}
