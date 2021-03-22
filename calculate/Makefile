EXEC = calc
OBJ_CATALOG = .obj/
LIB_CATALOG = .lib/


SOURCE = $(wildcard *.c)
OBJ_ALL = $(wildcard *.o)
OBJ = $(patsubst %.c,$(OBJ_CATALOG)%.o,$(SOURCE))
#LIB = $(patsubst %.o,$(LIB_CATALOG)%.so,$(OBJ_ALL))
LIB = add.so div.so mul.so sub.so

CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared

all: $(EXEC) $(OBJ)

$(EXEC): $(OBJ)
	$(CC) main.c -o $@ -ldl
	
$(OBJ_CATALOG)%.o: %.c
	$(CC) $^ -fPIC -c

	


#calc: src/main.c
#	$(CC) $^ -o $@ -ldl
	
#$(OBJ_DIR)%.o: src/%c
#	$(CC) $^ -fPIC -c 
#*.o: src/*.c
#	$(CC) $^ -fPIC -c
#all: $(EXEC) $(OBJ)$(LIB)
#$(EXEC): $(SRC)
#	$(CC) $(MAIN) -o $@ -ldl
#$(OBJ): $(SRC)
#	$(CC) $^ -fPIC -c


#add.so: add.o
#	$(CC) $(LDFLAGS) $^ -o $@

#div.so: div.o
#	$(CC) $(LDFLAGS) $^ -o $@

#mul.so: mul.o
#	$(CC) $(LDFLAGS) $^ -o $@

#sub.so: sub.o
#	$(CC) $(LDFLAGS) $^ -o $@

 
#make_dir:
#	mkdir -p ./lib && mv $(LIB) ./lib
#	mkdir -p ./obj && mv *.o ./obj

clean:
	rm -rf calc *.o *.so

