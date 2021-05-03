CC = gcc
EXEC = arr

all: $(EXEC)  make_dir
 
$(EXECUTABLE): 
	$(CC) main.c -o $@ -ldl
.o: *.c
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
	mkdir -p ./obj && mv $(OBJ) ./obj

clean:
	rm -rf ./lib ./obj $(EXECUTABLE) 
	rm -rf *.o *.so

