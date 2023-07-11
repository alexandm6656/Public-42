NAME = server
NAME2 = client
SRCS = server.c error.c pid.c error_server.c
SRCS2 = client.c error.c pid.c 
OBJS = $(SRCS:.c=.o)
OBJS2 = $(SRCS2:.c=.o)
CC = cc
C_FLAGS = -Wextra -Wall -Werror
RM = rm -f
LIBFT = libft/libft.a

all: $(NAME) $(NAME2) libft.a

%.o: %.c mini_talk.h
	$(CC) $(C_FLAGS) -c $<

libft.a:
	make -C libft
	mv $(LIBFT) .

$(NAME): $(OBJS) libft.a
	$(CC) -g $(OBJS) -o $(NAME) libft.a

$(NAME2): $(OBJS2) libft.a
	$(CC) -g $(OBJS2) -o $(NAME2) libft.a

clean:
	$(RM) ${OBJS}
	$(RM) ${OBJS2}
	$(RM) libft.a
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME2)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re