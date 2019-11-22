a.out: main.o listaDoblementeCircular.o
	gcc main.o listaDoblementeCircular.o
main.o: main.c
	gcc -c -Wall main.c
listaDoblementeCircular.o: listaDoblementeCircular.c
	gcc -c -Wall listaDoblementeCircular.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaDoblementeCircular.o listaDoblementeCircular.c~ listaDoblementeCircular.h~ main.c~
indent: 
	indent main.c listaDoblementeCircular.c listaDoblementeCircular.h 

