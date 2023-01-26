/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:40:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/26 10:27:16 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	parsing_arg(t_elements *items)
{
	if (make_string(items) == 0)
		return (0);
	if (is_validated_str(items) == 0)
		return (free(items->str), 0);
	if (make_array(items) == 0)
		return (0);
	if (parse_array(items) == 0)
		return (0);
	if (count_minus(items) == 0)
		return (0);
	return (1);
}
