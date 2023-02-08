/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:52:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/08 11:24:54 by lisa             ###   ########.fr       */
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
	if (!a)
		return (0);
	return (a);
}

static t_list	*other_nodes(char *line, t_list *a)
{
	long long int	nb;
	t_list			*following;

	nb = 0;
	nb = ft_atoll(line);
	if (nb > INT_MAX || nb < INT_MIN)
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
			if (!a)
				return (0);
		}
		row++;
	}
	free_array(input->arr);
	return (a);
}
