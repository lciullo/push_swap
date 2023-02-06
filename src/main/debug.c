/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:36:09 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/06 12:49:42 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static void	print_swap(t_list **a, t_list	**b, t_stack *len)
{
	ft_printf("\n========berfore swap ss ==========\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n======== after swap ss ==========\n");
	swap_ss(*a, *b);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n=============================\n");
	ft_printf("\nbefore swap a \n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("\nafter swap a =====\n");
	swap_a(*a, len);
	list_print(*a);
	ft_printf("\n=============================\n");
	ft_printf("before swap b \n");
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("after swap b =====\n");
	swap_b(*b, len);
	list_print(*b);
	return ;
}

static void	print_push(t_list **a, t_list **b, t_stack *len)
{
	ft_printf("\n=====================\n");
	ft_printf("========push a ==========\n");
	ft_printf("before push a\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("after push a\n");
	push_a(a, b, len);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n=====================\n");
	ft_printf("\n=====================\n");
	ft_printf("========push b ==========\n");
	ft_printf("before push b\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("after push b\n");
	push_b(b, a, len);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
}

static void	print_rotate(t_list **a, t_list **b, t_stack *len)
{
	ft_printf("\n=====================\n");
	ft_printf("========rotate a ==========\n");
	ft_printf("before rotate a\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("after rotate a\n");
	rotate_a(a, len);
	list_print(*a);
	ft_printf("\n=====================\n");
	ft_printf("========rotate b ==========\n");
	ft_printf("before rotate b\n");
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("after rotate b\n");
	rotate_b(b, len);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n========berfore rotate rr ==========\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n======== after rotate rr ==========\n");
	rotate_rr(a, b, len);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
}

static void	print_reverse_rotate(t_list **a, t_list **b, t_stack *len)
{
	ft_printf("\n=====================\n");
	ft_printf("======== reverse rotate a ==========\n");
	ft_printf("before reverse rotate a\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("after reverse rotate a\n");
	rvr_a(a, len);
	list_print(*a);
	ft_printf("\n=====================\n");
	ft_printf("======== reverse rotate b ==========\n");
	ft_printf("before reverse rotate b\n");
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("after reverse rotate b\n");
	rvr_b(b, len);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n========before reverse rotate rr ==========\n");
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
	ft_printf("\n======== after reserve rotate rr ==========\n");
	rrr_rotate(a, b, len);
	ft_printf("a : \n");
	list_print(*a);
	ft_printf("b : \n");
	list_print(*b);
}

void	print_sort(t_list **a, t_list **b, t_stack *len)
{
	print_swap(a, b, len);
	print_push(a, b, len);
	print_rotate(a, b, len);
	print_reverse_rotate(a, b, len);
}

t_list	*make_b(t_list *b)
{
	int	head;
	int second;
	int	third;
	int	last;
	int	i;

	head = 45;
	second = 0;
	third = -8;
	last = 100;
	i = 0;
	while (i < 4)
	{
		if (i == 0)
			b = ft_lstnew(head);
		if (i == 1)
			ft_lstadd_back(&b, ft_lstnew(second));
		if (i == 2)
			ft_lstadd_back(&b, ft_lstnew(third));
		if (i == 3)
			ft_lstadd_back(&b, ft_lstnew(last));
		i++;
	}
	return (b);
}
