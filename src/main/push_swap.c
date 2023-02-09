/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:08:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 16:38:56 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_parsing	input;
	t_stack		len;
	t_list		*a;
	t_list		*b;

	init_struct(&input, &len);
	input.ac = argc;
	input.av = argv;
	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (parsing_arg(&input) == 0)
		return (ft_printf("Error\n"), 0);
	a = make_list(&input);
	if (!a)
	{
		clear_lsts(&a);
		return (ft_printf("Error\n"), free_array(input.arr), 0);
	}
	if (parsing_list(&a) == 0)
		return (0);
	ft_sort(&a, &b, &len);
	clear_lsts(&a);
	return (0);
}
