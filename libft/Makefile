NAME = libft.a

SRCS = 		ft_strncmp.c			ft_putnbr_fd.c	ft_strrchr.c\
			ft_atoi.c				ft_putstr_fd.c	ft_strtrim.c\
			ft_bzero.c				ft_split.c		ft_substr.c\
			ft_calloc.c				ft_strchr.c		ft_tolower.c\
			ft_isalnum.c			ft_strdup.c		ft_toupper.c\
			ft_isalpha.c			ft_striteri.c	ft_strnstr.c\
			ft_isascii.c			ft_memchr.c		ft_strjoin.c\
			ft_isdigit.c			ft_memcmp.c		ft_strlcat.c\
			ft_isprint.c			ft_memcpy.c		ft_strlcpy.c\
			ft_itoa.c				ft_memmove.c	ft_strlen.c\
			ft_memset.c				ft_strmapi.c 	ft_putendl_fd.c\
			ft_putchar_fd.c	

SRCSB =	ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c	ft_lstdelone.c	ft_lstlast.c\
		ft_lstmap.c			ft_lstnew.c			ft_lstsize.c	ft_lstiter.c

OBJS =	$(SRCS:.c=.o)

OBJSB =	$(SRCSB:.c=.o) 

CC = gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) -c $(CFLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS) 
	@ar rc $(NAME) $(OBJS) 

clean:
	@rm -f $(OBJS) $(OBJSB)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJSB)
	@ar rc $(NAME) $(OBJS) $(OBJSB)

.PHONY: all clean fclean re bonus