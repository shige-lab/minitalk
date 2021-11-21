NAME = minitalk
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = server.c client.c
OBJS = $(SRCS:%.c=%.o)
PRINTF = ft_printf/libftprintf.a

$(NAME): all

all: $(PRINTF) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ $< $(PRINTF)

$(PRINTF): empty
	make -C ft_printf
empty:

test: all
	./server.o
clean:
	make clean -C ft_printf
	rm $(OBJS)
fclean: clean
	rm -f $(PRINTF)
re: clean all

.PHONY: clean all re empty