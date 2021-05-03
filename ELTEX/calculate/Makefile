.SECONDARY:
EXEC = calc
SRC_CATALOG = src
OBJ_CATALOG = obj
LIB_CATALOG = lib
BIN_CATALOG = bin

SOURCE = $(wildcard *.c)
OBJ_LIST = add.o div.o sub.o mul.o
OBJ = $(patsubst $(SRC_CATALOG)/%.c, $(OBJ_CATALOG)/%.o, $(SOURCE))
LIB = $(patsubst %.o, $(LIB_CATALOG)/%.so, $(OBJ_LIST))

CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared
FPIC = -fPIC -c

all: $(BIN_CATALOG)/$(EXEC) $(OBJ) $(LIB)

$(BIN_CATALOG)/$(EXEC): $(OBJ)
	$(CC) $(SRC_CATALOG)/main.c -o $@ -ldl

$(OBJ_CATALOG)/%.o: $(SRC_CATALOG)/%.c
	$(CC) $(FPIC) -c $< -o $@

$(LIB_CATALOG)/%.so: $(OBJ_CATALOG)/%.o
	$(CC) $(LDFLAGS) -o $@ $<

$(shell mkdir -p $(OBJ_CATALOG) $(LIB_CATALOG) $(BIN_CATALOG))

clean:
	rm -rf $(EXEC) $(OBJ_CATALOG) $(LIB_CATALOG) $(BIN_CATALOG)

