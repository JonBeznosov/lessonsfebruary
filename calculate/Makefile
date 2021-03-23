.SECONDARY:
EXEC = calc
SRC_CATALOG = src
OBJ_CATALOG = obj
LIB_CATALOG = lib

SOURCE = $(wildcard *.c)
LIB_LIST = add.o div.o sub.o mul.o
OBJ = $(patsubst $(SRC_CATALOG)/%.c, $(OBJ_CATALOG)/%.o, $(SOURCE))
LIB = $(patsubst %.o, $(LIB_CATALOG)/%.so, $(LIB_LIST))

CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared

all: $(EXEC) $(OBJ) $(LIB)

$(EXEC): $(OBJ) 
	$(CC) $(SRC_CATALOG)/main.c -o $@ -ldl
 
$(OBJ_CATALOG)/%.o: $(SRC_CATALOG)/%.c
	$(CC) -fPIC -c $< -o $@

$(LIB_CATALOG)/%.so: $(OBJ_CATALOG)/%.o
	$(CC) $(LDFLAGS) -o $@ $<

$(shell mkdir -p $(OBJ_CATALOG) $(LIB_CATALOG))


clean:
	rm -rf calc *.o *.so $(OBJ_CATALOG) $(LIB_CATALOG)

