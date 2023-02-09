/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:52:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 15:13:15 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"
#include <stdio.h>

static	t_list	*first_node(char *line, t_list *a)
{
	long int	nb;

	nb = 0;
	nb = ft_atoll(line);
	if (nb == 2147483648)
		return (0);
	a = ft_lstnew((int)nb);
	if (!a)
		return (0);
	return (a);
}

static t_list	*other_nodes(char *line, t_list *a)
{
	long int	nb;
	t_list		*following;

	nb = 0;
	nb = ft_atoll(line);
	if (nb == 2147483648)
		return (0);
	following = ft_lstnew((int)nb);
	ft_lstadd_back(&a, following);
	if (following == NULL)
	{
		clear_lsts(&a);
		return (0);
	}
	return (a);
}

t_list	*make_list(t_parsing *input)
{
	t_list			*a;
	int				row;

	row = 0;
	while (input->arr[row])
	{
		if (row == 0)
		{
			a = first_node(input->arr[row], a);
			if (!a)
				return (0);
		}
		else
		{
			a = other_nodes(input->arr[row], a);
			if (!a && row == 2)
			{
				clear_lsts(&a);
				return (0);
			}
		}
		row++;
	}
	free_array(input->arr);
	return (a);
}
