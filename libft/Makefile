NAME = libft.a

SRCS = ft_putchar.c \
					ft_strlen.c \
					ft_putstr.c \
					ft_putendl.c \
					ft_putnbr.c \

OUT = ft_putchar.o \
					ft_strlen.o \
					ft_putstr.o \
					ft_putendl.o \
					ft_putnbr.o \

INCLUDES = includes/

all: $(NAME)

$(NAME): $(SRCS)
			@gcc -c -Werror -Wextra -Wall $(SRCS) -I $(INCLUDES)
			@ar rc $(NAME) $(OUT)
			@ranlib $(NAME)
clean:
			@/bin/rm -f $(OUT)
fclean: clean
			@/bin/rm -f $(NAME)
re: fclean all