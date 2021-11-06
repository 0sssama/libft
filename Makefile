CC=gcc
FLAGS=-Wall -Wextra -Werror
MANDATORY =	ft_isalpha ft_isdigit ft_isalnum ft_isascii \
			ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy \
			ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower \
			ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp \
			ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin \
			ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
BONUS=		ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
			ft_lstdelone ft_lstclear
BNS_SRCS =$(BONUS:=.c)
BNS_OBJS =$(BONUS:=.o)
SRCS=$(MANDATORY:=.c)
OBJS=$(MANDATORY:=.o)
NAME=libft.a
AR= ar rcs

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: all $(BNS_OBJS)
	$(AR) $(NAME) $(BNS_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $? -o $@

clean:
	rm -f $(OBJS)
	rm -f $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


target: dependancy
	action