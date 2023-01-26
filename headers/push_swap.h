/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:15:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/26 10:26:09 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/headers/libft.h"

# include "struct.h"

# include "list.h"

//#---- Get arguments and make array ----#

char	*join_arg(t_elements *items);

int		make_string(t_elements *items);

int		make_array(t_elements *items);

//#--------------------- Parsing ---------------------#

int		parsing_arg(t_elements *items);

//#---- Parsing arguments ----#

int		make_string(t_elements *items);

char	*join_arg(t_elements *items);

int		is_validated_str(t_elements *items);

int		is_empty_str(t_elements *items);

//#---- Parsing array ----#

int		make_array(t_elements *items);

int		count_minus(t_elements *items);

int		parse_array(t_elements *items);

int     check_dupe(t_list *a);

#endif
