/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:23:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/20 09:57:32 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_printf(const char *format, ...)
{	
	int		i;
	int		size;
	va_list	arg;

	i = 0;
	size = 0;
	va_start(arg, format);
	while (format[i] && size != -1)
	{
		if (format[i] == '%' && format[i + 1])
		{
			++i;
			if (!format[i])
				break ;
			check_arg(format[i], arg, &size);
		}
		else
			ft_putchar(format[i], &size);
		i++;
	}
	va_end(arg);
	return (size);
}
