NAME = push_swap.a

SRCS = 	

OBJS =	$(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) -c $(CFLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) 
	@ar rc $(NAME) $(OBJS) 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(OBJS)
	@ar rc $(NAME) $(OBJS)

.PHONY: all clean fclean re bonus