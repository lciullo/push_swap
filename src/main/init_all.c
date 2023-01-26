/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:29:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/24 15:29:32 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

void	init_struct(t_elements *items)
{
	items->ac = 0;
	items->av = NULL;
	items->str = NULL;
	items->arr = NULL;
}
