a.out: main.o colac.o 
	gcc main.o colac.o 
main.o: main.c
	gcc -c -Wall main.c
colac.o: colac.c
	gcc -c -Wall colac.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o colac.o colac.c~ colac.h~ main.c~
indent: 
	indent main.c colac.c colac.h

