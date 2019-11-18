#ifndef __COLA_H__
#define __COLA_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct head
{
  int dato;
  struct head *siguiente;

};

struct head *agregarLista (struct head *, int);
struct head *eliminarLista (struct head *);
struct head *mostrarLista (struct head *);
#endif
