#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 15:04:53 by ckrommen          #+#    #+#              #
#    Updated: 2018/03/13 13:10:35 by ckrommen         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = ft_atoi.c ft_isascii.c ft_memccpy.c ft_memmove.c ft_strcmp.c ft_strlen.c ft_strnstr.c ft_toupper.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memchr.c ft_memset.c ft_strcpy.c ft_strncat.c ft_strrchr.c ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_strcat.c  ft_strdup.c  ft_strncmp.c ft_strstr.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strncpy.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstpush.c ft_strsubcount.c ft_wordcount.c ft_isprime.c ft_iseven.c get_next_line.c

OBJS = ft_atoi.o ft_isascii.o ft_memccpy.o ft_memmove.o ft_strcmp.o ft_strlen.o ft_strnstr.o ft_toupper.o ft_tolower.o ft_bzero.o ft_isdigit.o ft_memchr.o ft_memset.o ft_strcpy.o ft_strncat.o ft_strrchr.o ft_isalnum.o ft_isprint.o ft_memcmp.o  ft_strcat.o  ft_strdup.o  ft_strncmp.o ft_strstr.o ft_isalpha.o ft_memcpy.o ft_strchr.o ft_strlcat.o ft_strncpy.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_lstpush.o ft_strsubcount.o ft_wordcount.o ft_isprime.o ft_iseven.o get_next_line.o tools.o ft_printf.o convert.o flags.o numberconv.o helper.o buffer.o

PRINTF = ./ft_printf/tools.c ./ft_printf/ft_printf.c ./ft_printf/convert.c ./ft_printf/flags.c ./ft_printf/numberconv.c ./ft_printf/helper.c ./ft_printf/buffer.c

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) $(PRINTF) -I $(NAME)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re