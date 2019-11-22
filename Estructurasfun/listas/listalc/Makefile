a.out: main.o listaCircular.o 
	gcc main.o listaCircular.o 
main.o: main.c
	gcc -c -Wall main.c
listaCircular.o: listaCircular.c
	gcc -c -Wall listaCircular.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaCircular.o listaCircular.c~ listaCircular.h~ main.c~
indent: 
	indent main.c listaCircular.c listaCircular.h 

