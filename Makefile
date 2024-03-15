# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/31 15:49:20 by rshaheen      #+#    #+#                  #
#    Updated: 2024/03/15 16:07:58 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc 
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft/
OBJ_DIR = obj
INCLUDE = -L ./libft -lft
SRC = \
	push_swap.c \
	rotate_cheapest.c \
	check.c \
	print_error.c \
	free.c \
	make_llist.c \
	make_llist_helper.c \
	rotate_cases_b2a.c\
	rotate_cases_a2b.c\
	rotate_push.c\
	ft_sort.c \
	list_utils_2.c \
	list_utils.c \
	operations_a.c \
	operations_b.c \
	operations_c.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)


all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJ)
		make -C $(LIBFTDIR)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(INCLUDE)

clean:
	rm -rf $(OBJ_DIR)
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
		$(RM) $(NAME)
		@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re



