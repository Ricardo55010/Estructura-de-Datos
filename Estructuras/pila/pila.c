#include"pila.h"
struct head *
push (struct head *head, int dato)
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
      auxiliar = head;
      nuevo->dato = dato;
      nuevo->siguiente = auxiliar;
      head = nuevo;
    }
  return head;
}



struct head *
pop (struct head *head)
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
mostrar (struct head *head)
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
      free (nodo);
    }

  return head;
}
