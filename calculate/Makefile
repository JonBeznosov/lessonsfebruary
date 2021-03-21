CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared
SRC_DIR = src
SOURCE = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst %.c,%.o,$(SOURCE))
LIB = add.so div.so mul.so sub.so
EXEC = calc


all: $(EXEC) $(OBJ) $(LIB) make_dir

$(EXEC): $(OBJ) $(SOURCE)
	$(CC) src/main.c -o $@ -ldl

%.o: %.c

	$(CC) $^ -fPIC -c


add.so: add.o
	$(CC) $(LDFLAGS) $^ -o $@

div.so: div.o
	$(CC) $(LDFLAGS) $^ -o $@

mul.so: mul.o
	$(CC) $(LDFLAGS) $^ -o $@

sub.so: sub.o
	$(CC) $(LDFLAGS) $^ -o $@

make_dir:
	mkdir -p ./lib && mv $(LIB) ./lib
	mkdir -p ./obj && mv *.o ./obj

clean:
	rm -rf ./lib ./obj $(EXEC)
	rm -rf *.o *.so

