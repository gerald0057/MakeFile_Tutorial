.PHONY : all clean

all : prog1 prog2 prog3

clean: cleanexe cleanobj

prog1 : main.c prog1.c
	gcc -o prog1 main.c prog1.c

prog2 : main.c prog2.c
	gcc -o prog2 main.c prog2.c

prog3 : main.c prog3.c
	gcc -o prog3 main.c prog3.c

cleanexe:
	-rm -f *.exe

cleanobj :
	-rm -f *.o
