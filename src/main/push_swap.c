/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:08:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 15:50:41 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static void	free_all(t_parsing *input)
{
	free(input->str);
	free_array(input->arr);
}

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
		return (ft_printf("ERROR\n"), 0);
	a = make_list(&input);
	if (!a)
		return (ft_printf("ERROR\n"), 0);
	if (parsing_list(&a) == 0)
		return (ft_printf("ERROR\n"), 0);
	/*b = make_b(b);
	print_sort(&a, &b);*/
	//ft_sort(&a, &b, &input);
	free_all(&input);
	return (0);
}
