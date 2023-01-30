/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:15:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 11:58:04 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/headers/libft.h"

# include "struct.h"

# include "list.h"

//#---- Get arguments and make array ----#

char			*join_arg(t_elements *items);

int				make_string(t_elements *items);

int				make_array(t_elements *items);

//#--------------------- Parsing ---------------------#

int				parsing_arg(t_elements *items);

//#---- Parsing arguments ----#

int				make_string(t_elements *items);

char			*join_arg(t_elements *items);

int				is_validated_str(t_elements *items);

int				is_empty_str(t_elements *items);

//#---- Parsing array ----#

int				make_array(t_elements *items);

int				count_minus(t_elements *items);

int				parse_array(t_elements *items);

//#---- Parsing list ----#

int				parsing_list(t_list **a);

unsigned int	count_index(t_list **lst, int content);

void			get_index(t_list **lst);

int				is_sorted(t_list **lst);

int				check_dupe(t_list *a);
#endif
