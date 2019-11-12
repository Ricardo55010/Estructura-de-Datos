#include"listal.h"
struct head *
agregarLista (struct head *head, int dato)
{
  struct head *nuevo = (struct head *) malloc (sizeof (struct head));
  struct head *auxiliar = (struct head *) malloc (sizeof (struct head));
  if (head == NULL)
    {
      head = (struct head *) malloc (sizeof (struct head));
      head->siguiente = NULL;
      head->anterior = NULL;
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
      nuevo->anterior = auxiliar;
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
      head = head->siguiente;
      head->anterior = NULL;
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
	  printf ("%d\n ", nodo->dato);
	  nodo = nodo->siguiente;

	}
    }

  return head;
}
