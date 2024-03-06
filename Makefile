# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/31 15:49:20 by rshaheen      #+#    #+#                  #
#    Updated: 2024/03/06 16:52:41 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc 
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft/
OBJ_DIR = obj/
INCLUDE = -L ./libft -lft
# BONUS = checker
SRC = \
	push_swap.c \
	check_args.c \
	check_utils.c \
	ft_1st_last.c \
	ft_add_back.c \
	ft_cheapest_rotate.c \
	ft_check_sort.c \
	ft_checkdup.c \
	input_error.c \
	ft_free.c \
	ft_freestr.c \
	ft_make_llist.c \
	ft_rotate_cases_a.c\
	ft_rotate_cases_b.c\
	ft_rotate_push.c\
	ft_sort.c \
	ft_stack_new.c \
	ft_utils_2.c \
	lst_utils.c \
	operations_a.c \
	operations_b.c \
	operations_c.c

# BONUS_SRC = /checker/checker.c
OBJ = ${SRC:.c=.o}
# BONUS_OBJ = ${BONUS_SRC:.c=.o}


all: ${NAME}

${OBJ_DIR}%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJ}
		make -C $(LIBFTDIR)
		${CC} ${FLAGS} ${OBJ} -o ${NAME} ${INCLUDE}

clean:
	${RM} ${OBJ} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
		${RM} ${NAME}
		@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re



