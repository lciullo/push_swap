/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:49:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/26 10:34:42 by lisa             ###   ########.fr       */
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
}	t_elements;


void	init_struct(t_elements *items);

#endif
