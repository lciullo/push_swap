/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:40:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 11:37:58 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	parsing_arg(t_parsing *input)
{
	if (empty_arg(input) == 0)
		return (0);
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
