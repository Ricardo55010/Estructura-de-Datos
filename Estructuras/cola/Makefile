a.out: main.o cola.o 
	gcc main.o cola.o 
main.o: main.c
	gcc -c -Wall main.c
cola.o: cola.c
	gcc -c -Wall cola.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o cola.o cola.c~ cola.h~ main.c~
indent: 
	indent main.c cola.c cola.h 

