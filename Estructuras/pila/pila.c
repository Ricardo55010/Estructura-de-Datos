#include"pila.h"
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
      auxiliar = head;
      nuevo->dato = dato;
      nuevo->siguiente = auxiliar;
      head = nuevo;
    }
  return head;
}



struct head *
eliminarLista (struct head *head)
{

  if (head == NULL)
    {
      printf ("La direccion de memoria no existe");
    }
  else
    {
      if (head->siguiente == NULL)
	{
	  head = NULL;
	  printf ("Ha vaciado la pila");
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
      free (nodo);
    }

  return head;
}
