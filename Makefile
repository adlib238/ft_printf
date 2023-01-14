# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfumiya <kfumiya@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/25 23:04:11 by kfumiya           #+#    #+#              #
#    Updated: 2021/01/30 03:57:15 by kfumiya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
RM 		= rm -f

SRCS	= ft_printf.c \
		flags/flags_init.c flags/flags_new.c flags/flags_parse.c \
		malloc_format/malloc_int.c malloc_format/malloc_str.c \
		str/str_add_back.c str/str_clear.c str/str_iter.c \
		str/str_last.c str/str_new.c str/str_write.c \
		transform/left_adjust.c transform/shrink_expand.c \
		transform/transform_value.c transform/zero_pad.c \
		utils/utils_char.c utils/utils_int.c utils/utils_memory.c \
		utils/utils_str.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
