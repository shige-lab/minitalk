NAME = libftprintf.a
LIBFT = libft/libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c\
		print_c.c\
		print_d.c\
		print_s.c\
		print_u.c\
		print_p.c\
		print_xX.c\
		ft_itoa_dx.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<
$(LIBFT): empty
	make -C libft
empty:

clean:
	rm -f $(OBJS) $(BOBJS)
	make clean -C libft
fclean: clean
	rm -f $(NAME)
	rm -f $(libft)
re: fclean all
test: $(NAME)
	$(CC) $(CFLAGS) $(NAME) main.c &&./a.out
test-: $(NAME)
	$(CC) $(NAME) main.c &&./a.out

.PHONY: all clean fclean re bonus test