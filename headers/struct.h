/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:49:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 10:23:46 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_elements
{
	int		ac;
	char	**av;
	char	*str;
	char	**arr;
	int		a_len;
	int		b_len;
}	t_elements;

void	init_struct(t_elements *items);

#endif
