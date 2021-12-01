NAME = minitalk
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = server.c client.c
OBJS = $(SRCS:%.c=%.o)
PRINTF = libft/libft.a

$(NAME): all

all: $(PRINTF) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ $< $(PRINTF)

$(PRINTF): empty
	make -C libft
empty:

test: all
	./server.o
clean:
	make clean -C libft
	rm $(OBJS)
fclean: clean
	rm -f $(PRINTF)
re: clean all

.PHONY: clean all re empty