/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:49:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/30 14:17:19 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_parsing
{
	int		ac;
	char	**av;
	char	*str;
	char	**arr;

}	t_parsing;

typedef struct s_stack
{
	int		stack_a;
	int		stack_b;
}	t_stack;

void	init_struct(t_parsing *input, t_stack *len);

#endif
