CC = gcc
EXEC = rezult
ARRC = ar rc
RUN = ranlib
CATALOG = -L.

OBJ = $(patsubst %.c,%.o,$(wildcard *.c))

#all: $(EXEC) $(OBJ) 

#$(EXEC): main.o
#	$(CC) $^ $(CATALOG) -o $@

#%.o: %.c
#	$(CC) -c $^

#libfunc.a: %.o
#	$(ARRC)	$@ $^ && $(RUN) $@


############################################


all: $(EXEC) $(OBJ) make_dir

$(EXEC): $(OBJ)
	gcc -c *.c 
	ar rc libfunc.a *.o 
	$(RUN) libfunc.a 
	gcc -c main.c 
	gcc main.o -L. -lfunc -o rezult
make_dir:
	mkdir -p ./obj && mv *.o ./obj
	mkdir -p ./lib && mv *.a ./lib
clean:
	rm -rf ./lib ./obj *.o *.a $(EXEC)

#gcc -c %.c
#ar rc libfunc.a %.o
#runlib libfunc.a
#gcc main.c -c
#gcc main.o -L. -lfunc -o rezult
