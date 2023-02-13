/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:17:44 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/13 16:08:21 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	make_array(t_parsing *input)
{
	input->arr = ft_split(input->str, ' ');
	if (!input->arr)
	{
		free(input->str);
		return (0);
	}
	free(input->str);
	return (1);
}

int	count_minus(t_parsing *input)
{
	int	row;
	int	col;
	int	minus;

	row = 0;
	while (input->arr[row])
	{
		col = 0;
		minus = 0;
		while (input->arr[row][col])
		{
			if (input->arr[row][col] == '-')
			{
				minus++;
			}
			if (minus > 1)
			{
				free_array(input->arr);
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}

static int	check_minus_row(char *row)
{
	int	minus;
	int	i;

	minus = 0;
	i = 0;
	while (row[i] != '\0')
	{
		if (row[i] == '-')
			minus++;
		i++;
	}
	if (minus != 0 && row[0] != '-')
		return (0);
	return (1);
}

int	parse_array(t_parsing *input)
{
	int	row;
	int	col;

	row = 0;
	while (input->arr[row])
	{
		col = 0;
		while (input->arr[row][col])
		{
			if (input->arr[row][col] == '-' \
				&& input->arr[row][col + 1] == '\0')
			{
				free_array(input->arr);
				return (0);
			}
			col++;
		}
		if (check_minus_row(input->arr[row]) == 0)
		{
			free_array(input->arr);
			return (0);
		}
		row++;
	}
	return (1);
}
