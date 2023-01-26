/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:15:32 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/24 16:42:26 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	is_empty_str(t_elements *items)
{
	size_t	i;
	size_t	space;
	size_t	new_line;

	i = 0;
	space = 0;
	new_line = 0;
	while (items->str[i])
	{
		if (items->str[i] == ' ')
			space++;
		if (items->str[i] == '\n')
			new_line++;
		i++;
	}
	if (ft_strlen(items->str) == (space + new_line))
		return (0);
	return (1);
}

int	is_validated_str(t_elements *items)
{
	size_t	i;

	i = 0;
	while (items->str[i])
	{
		if (!(items->str[i] >= '0' && items->str[i] <= '9') \
			&& items->str[i] != ' ' && items->str[i] != '-' \
			&& items->str[i] != '\n')
			return (0);
		i++;
	}
	if (is_empty_str(items) == 0)
		return (0);
	return (1);
}

char	*join_arg(t_elements *items)
{
	int		i;
	char	*str;

	i = 2;
	str = ft_strdup(items->av[1]);
	if (!str)
		return (NULL);
	while (i < items->ac)
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, items->av[i]);
		i++;
	}
	return (str);
}

int	make_string(t_elements *items)
{
	if (items->ac == 2)
	{
		items->str = ft_strdup(items->av[1]);
		if (!items->str)
		{
			free(items->str);
			return (0);
		}
	}
	else if (items->ac > 2)
	{
		items->str = join_arg(items);
		if (!items->str)
		{
			free(items->str);
			return (0);
		}
	}
	return (1);
}
