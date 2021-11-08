# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 13:16:18 by olabrahm          #+#    #+#              #
#    Updated: 2021/11/08 13:30:29 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
MANDATORY =	ft_isalpha ft_isdigit ft_isalnum ft_isascii \
			ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy \
			ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower \
			ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp \
			ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin \
			ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
BONUS=		ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus \
			ft_lstlast_bonus ft_lstadd_back_bonus ft_lstdelone_bonus \
			ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonuss
OBJS=$(MANDATORY:=.o)
BNS_OBJS =$(BONUS:=.o)
NAME=libft.a
AR= ar rcs

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: all $(BNS_OBJS)
	$(AR) $(NAME) $(BNS_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $? -o $@

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all