/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:10:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/01/27 09:45:06 by lciullo          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

static	size_t	start_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n')
		i++;
	return (i);
}	

static int	add_overflow(long long int *nb, long long int a, long long int b)
{
	*nb = a + b;
	if (a > 0 && b > 0 && *nb < 0)
		return (1);
	if (a < 0 && b < 0 && *nb > 0)
		return (1);
	return (0);
}

static int	mul_overflow(long long int *nb, long long int a, long long int b)
{
	*nb = a * b;
	if (!a)
		return ((*nb) / b != a);
	return ((*nb) / a != b);
}

long long int	ft_atoll(char *str)
{
	long long int	nb;
	int				sign;
	size_t			i;

	nb = 0;
	sign = 1;
	i = start_len(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		if (mul_overflow(&nb, nb, 10))
			return (-1 * (sign == 1));
		if (add_overflow(&nb, nb, (long long int) str[i] - 48))
			return (-1 * (sign == 1));
		i++;
	}
	return ((nb * sign));
}
