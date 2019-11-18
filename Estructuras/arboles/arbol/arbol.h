#ifndef __ARBOL_H__
#define __ARBOL_H__

#include<stdlib.h>
#include<stdio.h>
struct Arbol
{
  int dato;
  struct Arbol *izquierdo;
  struct Arbol *derecho;
};

int buscar (struct Arbol *, int);

struct Arbol *insertar (struct Arbol *, int);

void mostrar (struct Arbol *);

#endif
