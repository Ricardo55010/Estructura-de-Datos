#include"listac.h"
int
agregarLista (struct lista *lista, int dato)
{
  if (lista == NULL)
    {
      printf ("No existe esa direccion de memoria\n");
    }
  else
    {
      lista->dato = (int *) malloc (lista->tamano * sizeof (int));
      lista->dato[lista->n] = dato;
      (lista->n)++;
      if (lista->n == lista->tamano)
	{
	  struct lista *listaNueva;
	  listaNueva->tamano = (lista->tamano) * 2;
	  listaNueva->dato =
	    (int *) malloc (listaNueva->tamano * sizeof (int));
	  memcpy (listaNueva->dato, lista->dato, sizeof (lista->dato));
	  lista->dato = listaNueva->dato;
	}


    }
  return 0;
}


int
eliminarLista (struct lista *lista)
{
  (lista->n)--;


  return 0;
}

int
mostrarLista (struct lista *lista)
{
  for (int i = 0; i != lista->n; i++)
    {
      printf ("%d", lista->dato[i]);

    }


  return 0;
}
