CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -shared


VPATH = src:../headers
LIB = add.so div.so mul.so sub.so
OBJ = main.o add.o div.o mul.o sub.o

EXECUTABLE = calc

all: $(EXECUTABLE) $(OBJ) $(LIB) make_dir
#all: $(EXECUTABLE) %.o %.so make_dir 

$(EXECUTABLE): 
	$(CC) main.c -o $@ -ldl
	
%.o: %.c
	$(CC) $^ -fPIC -c
	
#.so: *.o
#	($CC) $(LDFLAGS) $^ -o $@
	  
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
	mkdir -p ./obj && mv $(OBJ) ./obj

clean:
	rm -rf ./lib ./obj $(EXECUTABLE) 
	rm -rf *.o *.so

