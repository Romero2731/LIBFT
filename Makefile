# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: disle <disle@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 16:19:37 by disle             #+#    #+#              #
#    Updated: 2021/10/27 16:21:18 by disle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

HEADER = libft.h

LIST =	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
		ft_strlen.c		ft_memset.c		ft_bzero.c\
		ft_memcpy.c		ft_memmove.c	ft_strlcpy.c\
		ft_strlcat.c	ft_isprint.c	ft_toupper.c\
		ft_tolower.c	ft_isascii.c	ft_strchr.c\
		ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
		ft_memcmp.c		ft_strnstr.c	ft_atoi.c\
		ft_calloc.c		ft_strdup.c		ft_substr.c\
		ft_strjoin.c	ft_strtrim.c	ft_itoa.c\
		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_split.c
		
LIST_B = ft_lstnew.c	ft_lstadd_front.c	ft_lstmap.c\
		 ft_lstsize.c	ft_lstlast.c		ft_lstadd_back.c\
		 ft_lstdelone.c	ft_lstclear.c		ft_lstiter.c

OBJ = $(LIST:%.c=%.o)
OBJ_B = $(LIST_B:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
CC = gcc
RM = rm -f

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?
	
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@

bonus : $(OBJ_B)
	ar rcs $(NAME) $(OBJ_B) $?

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
