a.out: main.o pila.o 
	gcc main.o pila.o 
main.o: main.c
	gcc -c -Wall main.c
pila.o: pila.c
	gcc -c -Wall pila.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o pila.o pila.c~ pila.h~ main.c~
indent: 
	indent main.c pila.c pila.h 

