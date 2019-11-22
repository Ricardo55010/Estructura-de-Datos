#include"cola.h"
struct head *
agregarCola (struct head *head, int dato)
{
  struct head *nuevo = (struct head *) malloc (sizeof (struct head));
  struct head *auxiliar = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      head = (struct head *) malloc (sizeof (struct head));
      head->dato = dato;
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
eliminarCola (struct head *head)
{

  if (head == NULL)
    {
      printf ("\n");
    }
  else
    {
      if (head->siguiente == NULL)
	{
	  head = NULL;
	  return head;
	}
      else
	{
	  head = head->siguiente;
	  return head;
	}
    }
  return head;
}

struct head *
mostrarCola (struct head *head)
{
  struct head *nodo = NULL;
  if (head == NULL)
    {
      printf ("\n");
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
