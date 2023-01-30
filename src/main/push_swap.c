/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:08:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 12:23:36 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../headers/push_swap.h"

static void	free_all(t_elements *items)
{
	free(items->str);
	free_array(items->arr);
}

/*static void	print_sort(t_list *a, t_list *b)
{
	ft_printf("========swap ss ==========\n");
	ft_printf("a :");
	list_print(a);
	ft_printf("b :");
	list_print(b);
	ft_printf("========swap ss ==========\n");
	ft_swap_ss(a,b);
	ft_printf("a : ");
	list_print(a);
	ft_printf("b : ");
	list_print(b);
	ft_printf("\n=====================\n");
	ft_printf("========push a ==========\n");
	ft_printf("before push a");
	list_print(a);
	list_print(b);
	ft_printf("after push a");
	pa(&a, &b);
	list_print(a);
	list_print(b);
	ft_printf("==========");
	ft_printf("\n=====================\n");
	ft_printf("======== rotate ==========\n");
	ft_printf("before rotate");
	list_print(a);
	list_print(b);
	ft_printf("after rotate");
	rotate_rr(&a, &b);
	list_print(a);
	list_print(b);
	ft_printf("==========");
	ft_printf("\n=====================\n");
	ft_printf("======== rrr==========\n");
	ft_printf("before rrr");
	list_print(a);
	list_print(b);
	ft_printf("after rotate");
	rrr_rotate(&a, &b);
	rr_a(&a);
	list_print(a);
	list_print(b);
	ft_printf("==========");
}*/

int	main(int argc, char *argv[])
{
	t_elements	items;
	t_list		*a;
	t_list		*b;

	init_struct(&items);
	items.ac = argc;
	items.av = argv;
	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (parsing_arg(&items) == 0)
		return (ft_printf("ERROR\n"), 0);
	a = make_list(&items);
	if (!a)
		return (ft_printf("ERROR\n"), 0);
	if (parsing_list(&a) == 0)
		return (ft_printf("ERROR\n"), 0);
	//ft_sort(&a, &b, &items);
	free_all(&items);
	return (0);
}
