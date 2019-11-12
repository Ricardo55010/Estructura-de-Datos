a.out: main.o listal.o 
	gcc main.o listal.o 
main.o: main.c
	gcc -c -Wall main.c
cita.o: listal.c
	gcc -c -Wall listal.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o listal.o listal.c~ listal.h~ main.c~
indent: 
	indent main.c listal.c listal.h 

