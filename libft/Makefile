# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 15:00:58 by lciullo           #+#    #+#              #
#    Updated: 2023/02/09 16:40:43 by lciullo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =	ft_libft_utils.c \
			ft_split.c \
			ft_free_array.c \
			check_arg.c \
			ft_printf.c \
			ft_printf_utils.c \
			ft_itoa.c \
			ft_strjoin.c \

DIR_SRCS = src/

DIR_OBJS = .objs/

DIR_HEAD = headers/

OBJS    =    ${SRCS:%.c=${DIR_OBJS}%.o}

CC    = cc

MKDIR    =    mkdir -p

HEADERS    =   	libft.h \

NAME    = libft.a

CFLAGS    = -Wall -Wextra -Werror -g 

${NAME} :	${OBJS}
			@echo $(OBJS)
			ar -rc ${NAME} ${OBJS}

all :        ${NAME}

clean :
			rm -rf ${DIR_OBJS}

fclean :	clean
			rm -rf ${NAME}

re :		fclean
			$(MAKE) all

${DIR_OBJS}%.o:		${DIR_SRCS}%.c    ${addprefix ${DIR_HEAD}, ${HEADERS}} | ${DIR_OBJS}
					${CC} ${CFLAGS} -I ${DIR_HEAD} -c $< -o $@

${DIR_OBJS}:
					${MKDIR} ${DIR_OBJS}


.PHONY:        all clean fclean re
