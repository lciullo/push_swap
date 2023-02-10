/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:15:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/10 15:25:09 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>

# include "../libft/headers/libft.h"

# include "struct.h"

# include "list.h"

//#---- Debug /!\ delete at the end----#

void			print_sort(t_list **a, t_list **b, t_stack *len);

t_list			*make_b(t_list *b);

void			ft_putstr_fd(char *s, int fd);

//#---- Get arguments and make array ----#

char			*join_arg(t_parsing *input);

int				make_string(t_parsing *input);

int				make_array(t_parsing *input);

//#--------------------- Parsing ---------------------#

int				parsing_arg(t_parsing *input);

//#---- Parsing arguments ----#

int				is_validated_str(t_parsing *input);

int				parse_arg(char *str);

int				empty_arg(t_parsing *input);

char			*join_arg(t_parsing *input);

int				make_string(t_parsing *input);

//#---- Parsing array ----#

int				make_array(t_parsing *input);

int				count_minus(t_parsing *input);

int				parse_array(t_parsing *input);

//#---- Parsing list ----#

int				parsing_list(t_list **a);

long int		ft_atoll(char *str);

unsigned int	count_index(t_list **lst, int content);

void			get_index(t_list **lst);

int				is_sorted(t_list **lst);

int				check_dupe(t_list *a);
#endif
