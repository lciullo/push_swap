/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:10:25 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/09 14:47:21 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/push_swap.h"

static	size_t	start_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\n')
		i++;
	return (i);
}

static long	int	ft_overflow(long int nb)
{
	if (nb > 2147483647)
		return (2147483648);
	if (nb < -2147483648)
		return (2147483648);
	return (nb);
}

long int	ft_atoll(char *str)
{
	long int		nb;
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
		if (nb != ((nb * 10) + str[i] - '0') / 10)
			return (2147483648);
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (ft_overflow(sign * nb));
}
