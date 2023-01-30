/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:29:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:16:45 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	init_struct(t_parsing *input, t_stack *len)
{
	input->ac = 0;
	input->av = NULL;
	input->str = NULL;
	input->arr = NULL;
	len->stack_a = 0;
	len->stack_b = 0;
}
