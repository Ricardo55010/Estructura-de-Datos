#include"cola.h"
struct head *
agregarLista (struct head *head, int dato)
{
  struct head *nuevo = (struct head *) malloc (sizeof (struct head));
  struct head *auxiliar = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      head = (struct head *) malloc (sizeof (struct head));
      head->dato = dato;
      printf ("Se ha llenado la cabeza %d\n", head->dato);
    }
  else
    {
      nuevo->dato = dato;
      nuevo->siguiente = NULL;
      auxiliar = head;
      while (auxiliar->siguiente != NULL)
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
      printf ("La direccion de memoria no existe");
    }
  else
    {
      if (head->siguiente == NULL)
	{
	  head = NULL;
	  printf ("Ha vaciado la cola");
	  return head;
	}
      else
	{
	  nodo = head;
	  nodo2 = head;
	  while (nodo->siguiente != NULL)
	    {
	      nodo = nodo->siguiente;

	    }
	  while (nodo2->siguiente != nodo)
	    {
	      nodo2 = nodo2->siguiente;
	    }
	  nodo2->siguiente = NULL;


	  return head;
	}
    }
  return head;
}

struct head *
mostrarLista (struct head *head)
{
  struct head *nodo = NULL;
  if (head == NULL)
    {

      printf ("No existe dicha memoria\n");
    }
  else
    {
      nodo = head;
      while (nodo != NULL)
	{
	  printf ("%d ", nodo->dato);
	  nodo = nodo->siguiente;

	}
    }

  return head;
}
