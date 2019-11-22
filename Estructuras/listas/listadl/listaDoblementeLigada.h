#ifndef __LISTADL_H__
#define __LISTADL_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct head
{
  int dato;
  struct head *siguiente;
  struct head *anterior;
};

struct head *agregarLista (struct head *, int);
struct head *eliminarLista (struct head *);
struct head *mostrarLista (struct head *);
#endif
