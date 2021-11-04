CC=gcc
FLAGS=-Wall -Wextra -Werror
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
NAME=libft.a
AR= ar rcs

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	${AR} ${NAME} ${OBJCTS}

%.o: %.c 
	$(CC) $(FLAGS) -c $? -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
