/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:37:31 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 13:22:13 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	is_validated_str(t_parsing *input)
{
	int	i;

	i = 0;
	while (input->str[i])
	{
		if (!(input->str[i] >= '0' && input->str[i] <= '9') \
			&& input->str[i] != ' ' && input->str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int	parse_arg(char *str)
{
	size_t	i;
	size_t	space;
	size_t	new_line;

	i = 0;
	space = 0;
	new_line = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			space++;
		if (str[i] == '\n')
			new_line++;
		i++;
	}
	if (ft_strlen(str) == (space + new_line))
		return (0);
	return (1);
}

int	empty_arg(t_parsing *input)
{
	int	row;

	row = 0;
	while (row < input->ac)
	{
		if (parse_arg(input->av[row]) == 0)
			return (0);
		row++;
	}
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
		if (!str)
			return (NULL);
		str = ft_strjoin(str, input->av[i]);
		if (!str)
			return (NULL);
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
