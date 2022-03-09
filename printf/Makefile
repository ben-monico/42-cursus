NAME = libft.a

SRCS = 		ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c 

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

.PHONY: all clean fclean re bonus