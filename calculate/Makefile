CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared
MAIN = src/main.c
SRC_DIR = .src/
OBJ_DIR = .obj/
LIB_DIR = lib
SRC = $(patsubst %.c,$(OBJ_DIR)%.o,$(wildcard $(SRC_DIR)*.c))
#OBJ = $(wildcard $(OBJ_DIR)/*.o)
LIB = add.so div.so mul.so sub.so
EXEC = calc


all: calc $(LIB) make_dir

calc: $(SRC)
	$(CC) $^ -o $@ -ldl
	
$(OBJ_DIR)%.o: %c
	$(CC) $< -fPIC -c 
#*.o: src/*.c
#	$(CC) $^ -fPIC -c
#all: $(EXEC) $(OBJ)$(LIB)
#$(EXEC): $(SRC)
#	$(CC) $(MAIN) -o $@ -ldl
#$(OBJ): $(SRC)
#	$(CC) $^ -fPIC -c


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
#	mkdir -p ./obj && mv *.o ./obj

clean:
	rm -rf calc *.o *.so

