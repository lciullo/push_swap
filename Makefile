# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciullo <lciullo@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 11:00:43 by lciullo           #+#    #+#              #
#    Updated: 2023/01/27 14:56:42 by lciullo          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#---- Final executable ---- #

NAME = push_swap

#---- Directories ----#
SRCS =  ./src/main/push_swap.c \
		./src/main/init_all.c \
		./src/parsing/parsing.c \
		./src/parsing/check_arg.c \
		./src/parsing/check_array.c \
		./src/lists/ft_lstnew.c \
		./src/lists/ft_lstlast.c \
		./src/lists/ft_lstadd_back.c \
		./src/lists/list_print.c \
		./src/lists/ft_lstsize.c \
		./src/lists/make_lists.c \
		./src/main/swap.c \
		./src/main/push.c \
		./src/main/rotate.c \
		./src/main/reverse_rotate.c \

OBJS = ${SRCS:.c=.o}

HEAD = ./headers/

# ---- Compiled Rules ---- #

CFLAGS = -Wall -Wextra -Werror 
#-g -fsanitize=address

%.o: %.c ${HEAD} 
	${CC} ${CFLAGS} -c $< -o $@ -I ${HEAD}


${NAME}:	${OBJS}
			make -C ./libft
			$(CC) ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}
			
# ---- Usual Commands ---- #
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		make fclean -C ./libft
		${RM} ${NAME}

re:		fclean
		$(MAKE) all

.PHONY:	all clean fclean re