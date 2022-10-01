CC=gcc
CFLAGS=-Wall -Wextra -Werror -o
CFILES=main.c ft_strlib.c ft_stdlib.c
BIN=square
all:
	$(CC) $(CFILES) $(CFLAGS) $(BIN)

clean:
	rm square
