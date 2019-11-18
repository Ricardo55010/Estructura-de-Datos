#include"listal.h"
struct head *
agregarLista (struct head *head, int dato)
{
  struct head *nuevo = (struct head *) malloc (sizeof (struct head));
  struct head *auxiliar = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      head = (struct head *) malloc (sizeof (struct head));
      head->siguiente = head;
      head->anterior = NULL;
      head->dato = dato;
      printf ("Se ha llenado la cabeza %d\n", head->dato);
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
      nuevo->anterior = auxiliar;
      auxiliar->siguiente = nuevo;
      head->anterior = nuevo;
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
      printf ("La direccion de memoria no existe");
    }
  else
    {
      if (head->siguiente == head)
	{
	  head = NULL;
	  printf ("Ha vaciado la lista");
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
	  head->anterior = nodo;
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

      printf ("No existe dicha memoria\n");
    }
  else
    {
      nodo = head;
      printf ("%d ", nodo->dato);
      nodo2 = nodo->siguiente;
      while (nodo2 != head)
	{
	  printf ("%d ", nodo2->dato);
	  nodo2 = nodo2->siguiente;

	}
    }

  return head;
}
