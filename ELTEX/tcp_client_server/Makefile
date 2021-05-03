CC = gcc
CFLAGS = -g -Wall

SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))

EXEC = server client

all: $(EXEC)
	@rm -rf *.o

server: $(OBJ)
	$(CC) $(CFLAGS) server.o -o $@

client: $(OBJ)
	$(CC) $(CFLAGS) client.o -o $@

$(OBJ):	$(SRC)
	$(CC) $(SRC) -c

clean:
	@rm -rf *.o $(EXEC)
