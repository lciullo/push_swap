/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:52:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:12:48 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static	t_list	*first_node(char *line, t_list *a)
{
	long long int	nb;

	nb = 0;
	nb = ft_atoll(line);
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	a = ft_lstnew((int)nb);
	return (a);
}

static t_list	*other_nodes(char *line, t_list *a)
{
	long long int	nb;

	nb = 0;
	nb = ft_atoll(line);
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	ft_lstadd_back(&a, ft_lstnew((int)nb));
	return (a);
}

t_list	*make_list(t_parsing *input)
{
	t_list			*a;
	int				row;

	row = 0;
	a = malloc(sizeof(t_list));
	if (!a)
		return (0);
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
			if (!a)
				return (0);
		}
		row++;
	}
	return (a);
}
