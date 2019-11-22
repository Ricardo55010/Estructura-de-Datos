#ifndef __PILA_H__
#define __PILA_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct head
{
  int dato;
  struct head *siguiente;

};

struct head *push (struct head *, int);
struct head *pop (struct head *);
struct head *mostrar (struct head *);
#endif
