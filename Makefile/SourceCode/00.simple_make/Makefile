all : main.o add.o sub.o hello.o
	gcc -o main.exe main.o add.o sub.o hello.o

main.o : main.c add.h hello.h sub.h log.h
	gcc -c main.c

add.o : add.c
	gcc -c add.c

sub.o : sub.c
	gcc -c sub.c

hello.o : hello.c log.h
	gcc -c hello.c

clean :
	-rm -f *.o
	-rm -f main.exe
