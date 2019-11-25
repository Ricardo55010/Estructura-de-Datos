a.out: main.o listac.o 
	gcc main.o listac.o 
main.o: main.c
	gcc -c -Wall main.c
listac.o: listac.c
	gcc -c -Wall listac.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listac.o listac.c~ listac.h~ main.c~
indent: 
	indent main.c listac.c listac.h 

