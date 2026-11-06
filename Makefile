CC = gcc
CFLAGS = -Wall -g

all: demo

demo: main.c
        $(CC) $(CFLAGS) -o demo main.c
clean:
        rm -f demo
