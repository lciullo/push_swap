/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:08:03 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 15:47:03 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../headers/push_swap.h"

static void	free_all(t_elements *items)
{
	free(items->str);
	free_array(items->arr);
}

/*void	ft_sort(t_list *a, t_list *b)
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

static t_list	*make_b(t_list *b)
{
	int	head;
	int	second;
	int	third;
	int	last;
	int	index;

	head = 45;
	second = 0;
	third = -8;
	last = 100;
	index = 0;
	while (index < 4)
	{
		if (index == 0)
			b = ft_lstnew(head);
		if (index == 1)
			ft_lstadd_back(&b, ft_lstnew(second));
		if (index == 2)
			ft_lstadd_back(&b, ft_lstnew(third));
		if (index == 3)
			ft_lstadd_back(&b, ft_lstnew(last));
		index++;
	}
	return (b);
}

static	unsigned int	count_index(t_list *lst, int content)
{
	unsigned int	index;

	index = 0;
	while (lst)
	{
		if (content > lst->content)
			index++;
		lst = lst->next;
	}
	return (index);
}

static void	get_index(t_list *lst)
{
	t_list			*copy;
	unsigned int	index;

	index = 0;
	copy = lst;
	while (copy)
	{
		copy->index = count_index(lst, copy->content);
		copy = copy->next;
	}
}

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
	if (check_dupe(a) == 0)
		return (ft_printf("ERROR\n"), 0);
	get_index(a);
	list_print(a);
	b = make_b(b);
	//ft_sort(a, b);
	free_all(&items);
	return (0);
}
