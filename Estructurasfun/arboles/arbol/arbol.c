#include"arbol.h"

struct Arbol*
buscar (struct Arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return NULL;
    }
  if (raiz->dato == dato)
    {
      return raiz;
    }
  if (dato < raiz->dato)
    {
      return buscar (raiz->izquierdo, dato);
    }
  return buscar (raiz->derecho, dato);
}

struct Arbol *
insertar (struct Arbol *raiz, int dato)
{
  struct Arbol *nuevo = NULL;
  /* caso base */
  if (raiz == NULL)
    {
      nuevo = (struct Arbol *) malloc (sizeof (struct Arbol));
      if (nuevo == NULL)
	return NULL;
      nuevo->dato = dato;
      nuevo->izquierdo = NULL;
      nuevo->derecho = NULL;
      return nuevo;
    }
  if (dato == raiz->dato)
    {
      return raiz;
    }
  if (dato < raiz->dato)
    {
      raiz->izquierdo = insertar (raiz->izquierdo, dato);
    }
  else
    {
      raiz->derecho = insertar (raiz->derecho, dato);
    }
  return raiz;
}

void
mostrar (struct Arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }

  mostrar (raiz->izquierdo);
  printf ("%d, ", raiz->dato);
  mostrar (raiz->derecho);
}

struct Arbol *
eliminar (struct Arbol *Arbol, int dato)
{
struct Arbol*nRaiz=buscar(Arbol,dato);
struct Arbol* temp=NULL;
temp=nRaiz;
if(nRaiz->izquierda==NULL){
nRaiz=temp->derecha;
return Arbol;
 }
else{
nRaiz=temp->derecha;
if((nRaiz->izquierda)->dato<(temp->derecha)->dato){
}


}
}
