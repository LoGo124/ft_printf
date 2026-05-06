# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilopez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 10:11:26 by ilopez-g          #+#    #+#              #
#    Updated: 2026/05/06 17:05:14 by ilopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER 	= inc/ft_printf.h
MKFL	= Makefile
NAME 	= libftprintf.a

OBJ_DIR	= obj/
LIB_DIR = lib/libft/
LIB		= $(LIB_DIR)libft.a

SRC			= $(wildcard src/*.c)
#SRC 	= src/ft_printf.c src/ft_put_char.c src/ft_put_str.c \
		src/ft_put_nums.c src/ft_put_hex.c src/ft_put_pointer.c

RM 		= rm -rf
MP		= mkdir -p

CFLAGS 	= -Werror -Wall -Wextra# -W -O3 -Ofast 

LIBC 	= ar -rcs

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
DEP	= $(addsuffix .d, $(basename $(OBJ)))

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MP) $(dir $@)
	@${CC} ${CFLAGS} -MMD -I ./ -c $< -o $@

all:
	@$(MAKE) -C $(LIB_DIR) 
	@$(MAKE) $(NAME)

-include ${DEP}
$(NAME): $(OBJ)
	cp -r $(LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJ) $(LIB)

testmain: all
	@cc main.c libftprintf.a
	@./a.out "Hola mundo!"

clean:
	$(RM) $(OBJ) $(OBJ_DIR)
	@$(MAKE) clean -C $(LIB_DIR)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIB_DIR)
	$(RM) $(NAME)

re:
	@$(MAKE) re -C $(LIB_DIR)
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
