# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charoua <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 13:16:59 by charoua           #+#    #+#              #
#    Updated: 2019/10/11 20:43:13 by charoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			libft.a
NAME_BONUS = 	libft_bonus.a

HEADER = 		libft.h

CC = 			clang

CFLAGS = 		-Werror -Wextra -Wall

SRC = 		  	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

SRC_BONUS = 	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				ft_striter_bonus.c \
				ft_strncpy_bonus.c \
				ft_strncat_bonus.c \
				ft_strrev_bonus.c

RED = 			\033[31m
GREEN = 		\033[32m
NOC = 			\033[0m

OBJ = 			$(SRC:.c=.o)

OBJ_BONUS = 	$(SRC_BONUS:.c=.o)

all: 		$(NAME)

bonus: 		$(NAME_BONUS)

$(NAME): 	$(OBJ)
	@ar -rcs $@ $^
	@echo "$(GREEN)$@ is ready !$(NOC)"

$(NAME_BONUS): $(OBJ_BONUS)
	@ar -rcs $@ $^
	@echo "$(GREEN)$@ is ready !$(NOC)"

$(OBJ): %.o: %.c $(HEADER) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_BONUS): %.o: %.c $(HEADER) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)obj deleted !$(NOC)"
	@$(RM) $(OBJ)
	@$(RM) $(OBJ_BONUS)

fclean: clean
	@echo "$(RED)$(NAME) deleted !$(NOC)"
	@$(RM) $(NAME)
	@$(RM) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re
//.SILENT:
