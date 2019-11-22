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

struct head *agregarCola (struct head *, int);
struct head *eliminarCola (struct head *);
struct head *mostrarCola (struct head *);
#endif
