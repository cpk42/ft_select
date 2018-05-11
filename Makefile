#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/01 17:23:01 by ckrommen          #+#    #+#              #
#    Updated: 2018/05/10 15:29:48 by ckrommen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_select.c tools.c

FLAGS = -Wall -Wextra -Werror -ltermcap -lcurses

NAME = ft_select

LIBFT = libft

all: $(NAME)

make: all

$(NAME):
	@echo "\033[32mCompiling source files\033[0m"
	@make -C $(LIBFT)
	@gcc $(FLAGS) $(SRCS) -L$(LIBFT) -lft -o $(NAME)

clean:
	@echo "\033[32mCleaning up\033[0m"
	@rm -rf $(NAME)
	@make clean -C $(LIBFT)

fclean: clean
	@echo "\033[32mFull clean\033[0m"
	@make fclean -C $(LIBFT)

re: fclean make

.PHONY: clean fclean re