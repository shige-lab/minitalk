NAME = minitalk
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = server.c client.c
OBJS = $(SRCS:%.c=%)
LIBFT = libft/libft.a

$(NAME): all

all: $(LIBFT) $(OBJS)

%:%.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBFT)

$(LIBFT): empty
	make -C libft
empty:

test: all
	./server.o
clean:
	make clean -C libft
	rm $(OBJS)
fclean: clean
	rm -f $(LIBFT)
re: clean all

.PHONY: clean all re empty