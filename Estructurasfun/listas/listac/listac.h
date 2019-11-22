#ifndef __LISTAC_H__
#define __LISTAC_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lista
{
  int *dato;
  int tamano;
  int n;



};

struct lista *agregarLista (struct lista *, int);
struct lista *eliminarLista (struct lista *);
struct lista *mostrarLista (struct lista *);
#endif
