a.out: main.o listaDoblementeLigada.o 
	gcc main.o listaDoblementeLigada.o 
main.o: main.c
	gcc -c -Wall main.c
listaDoblementeLigada.o: listaDoblementeLigada.c
	gcc -c -Wall listaDoblementeLigada.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listaDoblementeLigada.o listaDoblementeLigada.c~ listaDoblementeLigada.h~ main.c~
indent: 
	indent main.c listaDoblementeLigada.c listaDoblementeLigada.h 

