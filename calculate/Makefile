CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared
MAIN = src/main.c
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(wildcard $(OBJ_DIR)/*.o)
#$(OBJ) = $(wildcard *.o)
LIB = add.so div.so mul.so sub.so
EXEC = calc


all: calc *.c $(OBJ) $(LIB)

calc: main.c
	$(CC) main.c -o $@ -ldl

*.o: *.c
	cd obj
	$(CC) $^ -fPIC -c



add.so: add.o
	$(CC) $(LDFLAGS) $^ -o $@

div.so: div.o
	$(CC) $(LDFLAGS) $^ -o $@

mul.so: mul.o
	$(CC) $(LDFLAGS) $^ -o $@

sub.so: sub.o
	$(CC) $(LDFLAGS) $^ -o $@


#make_dir:
#	mkdir -p ./lib && mv $(LIB) ./lib
#	mkdir -p ./obj && mv *.o ./obj

clean:
	rm -rf calc *.o *.so

