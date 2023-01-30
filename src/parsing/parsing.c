/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:40:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:12:48 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	is_empty_str(t_parsing *input)
{
	size_t	i;
	size_t	space;
	size_t	new_line;

	i = 0;
	space = 0;
	new_line = 0;
	while (input->str[i])
	{
		if (input->str[i] == ' ')
			space++;
		if (input->str[i] == '\n')
			new_line++;
		i++;
	}
	if (ft_strlen(input->str) == (space + new_line))
		return (0);
	return (1);
}

int	is_validated_str(t_parsing *input)
{
	size_t	i;

	i = 0;
	while (input->str[i])
	{
		if (!(input->str[i] >= '0' && input->str[i] <= '9') \
			&& input->str[i] != ' ' && input->str[i] != '-' \
			&& input->str[i] != '\n')
			return (0);
		i++;
	}
	if (is_empty_str(input) == 0)
		return (0);
	return (1);
}

char	*join_arg(t_parsing *input)
{
	int		i;
	char	*str;

	i = 2;
	str = ft_strdup(input->av[1]);
	if (!str)
		return (NULL);
	while (i < input->ac)
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, input->av[i]);
		i++;
	}
	return (str);
}

int	make_string(t_parsing *input)
{
	if (input->ac == 2)
	{
		input->str = ft_strdup(input->av[1]);
		if (!input->str)
		{
			free(input->str);
			return (0);
		}
	}
	else if (input->ac > 2)
	{
		input->str = join_arg(input);
		if (!input->str)
		{
			free(input->str);
			return (0);
		}
	}
	return (1);
}

int	parsing_arg(t_parsing *input)
{
	if (make_string(input) == 0)
		return (0);
	if (is_validated_str(input) == 0)
		return (free(input->str), 0);
	if (make_array(input) == 0)
		return (0);
	if (parse_array(input) == 0)
		return (0);
	if (count_minus(input) == 0)
		return (0);
	return (1);
}
