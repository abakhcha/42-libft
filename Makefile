# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abakhcha <abakhcha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 20:29:38 by abakhcha          #+#    #+#              #
#    Updated: 2023/12/02 20:32:11 by abakhcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =ft_itoa.c ft_strjoin.c ft_isalpha.c ft_isdigit.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c \
	ft_strtrim.c ft_substr.c ft_strlen.c ft_memset.c ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strdup.c ft_strmapi.c ft_striteri.c ft_split.c\
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS    =  ft_lstadd_back_bonus.c    ft_lstadd_front_bonus.c    ft_lstsize_bonus.c    ft_lstclear_bonus.c \
            ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_lstlast_bonus.c

OBJECTS = $(SRCS:.c=.o)

BONOBJECTS = $(BONUS:.c=.o)

all: $(NAME)

 
$(NAME): $(OBJECTS)
bonus: $(BONOBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -f $(OBJECTS) $(BONOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
