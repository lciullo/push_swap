/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:01:44 by lciullo           #+#    #+#             */
/*   Updated: 2023/02/10 12:28:25 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>

# include <unistd.h>

# include <stdarg.h>

# include <fcntl.h>

# include <limits.h>

//# ---- libft functions ---- #

size_t			ft_strlen(const char *str);

char			*ft_strdup(const char *src);

char			*ft_substr(const char *s, unsigned int start, size_t len);

char			*ft_strjoin(char *s1, char *s2);

char			**ft_split(char const *s, char c);

char			*ft_itoa(int n);

void			free_array(char **arr);

//# ---- ft_printf functions ---- #

int				ft_printf(const char *format, ...);

void			ft_putchar(char c, int *size);

void			ft_putstr(char *str, int *size);

void			ft_putnbr(int number, int *size);

void			ft_putnbr_base(long int nb, long int len, \
					char *base, int *size);
void			check_arg(char c, va_list arg, int *size);

#endif
