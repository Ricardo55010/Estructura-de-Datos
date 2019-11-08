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

int agregarLista (struct lista *, int);
int eliminarLista (struct lista *);
int mostrarLista (struct lista *);
#endif
