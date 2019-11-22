#include"listaCircular.h"
struct head *
agregarLista (struct head *head, int dato)
{
  struct head *nuevo = (struct head *) malloc (sizeof (struct head));
  struct head *auxiliar = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      head = (struct head *) malloc (sizeof (struct head));
      head->dato = dato;
      head->siguiente = head;
    }
  else
    {
      nuevo->dato = dato;
      nuevo->siguiente = head;
      auxiliar = head;
      while (auxiliar->siguiente != head)
	{
	  auxiliar = auxiliar->siguiente;
	}
      auxiliar->siguiente = nuevo;
    }
  return head;
}



struct head *
eliminarLista (struct head *head)
{

  struct head *nodo = (struct head *) malloc (sizeof (struct head));
  struct head *nodo2 = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      printf ("\n");
    }
  else
    {
      if (head->siguiente == head)
	{
	  head = NULL;
	  return head;
	}
      else
	{
	  nodo = head;
	  nodo2 = head;
	  while (nodo->siguiente != head)
	    {
	      nodo = nodo->siguiente;

	    }
	  while (nodo2->siguiente != nodo)
	    {
	      nodo2 = nodo2->siguiente;
	    }
	  nodo2->siguiente = head;


	  return head;
	}
    }
  return head;
}

struct head *
mostrarLista (struct head *head)
{
  struct head *nodo = NULL;
  struct head *nodo2 = NULL;
  if (head == NULL)
    {
      printf ("\n");
    }
  else
    {
      nodo = head;
      printf ("%d ", nodo->dato);
      nodo2 = head->siguiente;
      while (nodo2 != head)
	{
	  printf ("%d ", nodo2->dato);
	  nodo2 = nodo2->siguiente;

	}
    }

  return head;
}
