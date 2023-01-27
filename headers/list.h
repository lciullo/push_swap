/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:49:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 15:21:52 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	int				content;
	unsigned int	index;
	struct s_list	*next;
}	t_list;

//# ---- All utils function to make linked list ----#

t_list	*ft_lstnew(int content);

void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	*ft_lstlast(t_list *lst);

t_list	*make_list(t_elements *items);

void	list_print(t_list *lst);

int		ft_lstsize(t_list *lst);
//void    ft_clean_list(t_list *lst);

//#---- Functions for sort stack ----#

void	ft_sort(t_list *a, t_list *b);

//#---- swap ----#

void	ft_swap(t_list *a);

void	ft_swap_ss(t_list *a, t_list *b);

//#---- push ----#

void	pa(t_list **a, t_list **b);

void	pb(t_list *a, t_list *b);

//#---- rotate ----#

void	rotate(t_list **lst);

void	rotate_a(t_list **a);

void	rotate_b(t_list **b);

void	rotate_rr(t_list **a, t_list **b);

//#---- reverse rotate ----#

void	reverse_rotate(t_list **lst);

void	rr_a(t_list **a);

void	rr_b(t_list **b);

void	rrr_rotate(t_list **a, t_list **b);

#endif
