/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:17:44 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 10:08:35 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	make_array(t_elements *items)
{
	items->arr = ft_split(items->str, ' ');
	if (!items->arr)
	{
		free_array(items->arr);
		free(items->str);
		return (0);
	}
	return (1);
}

int	count_minus(t_elements *items)
{
	int	row;
	int	col;
	int	minus;

	row = 0;
	minus = 0;
	while (items->arr[row])
	{
		col = 0;
		while (items->arr[row][col])
		{
			if (items->arr[row][col] == '-')
				minus++;
			col++;
		}
		row++;
	}
	if (minus > row)
	{
		free_array(items->arr);
		return (0);
	}
	return (1);
}

int	parse_array(t_elements *items)
{
	int	row;
	int	col;

	row = 0;
	while (items->arr[row])
	{
		col = 0;
		while (items->arr[row][col])
		{
			if (items->arr[row][col] == '-' \
				&& items->arr[row][col + 1] == '\0')
			{
				free_array(items->arr);
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
