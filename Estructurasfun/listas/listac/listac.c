#include"listac.h"
struct lista *
agregarLista (struct lista *lista, int dato)
{
  int *temp = NULL;
  if (lista == NULL)
    {
      lista = (struct lista *) malloc (sizeof (struct lista));
      lista->tamano = 8;
      lista->n = 0;
      lista->dato = (int *) malloc (lista->tamano * sizeof (int));
      *(lista->dato + lista->n) = dato;
    }
  else
    {

      (lista->n)++;
      if (lista->n == lista->tamano)
	{
	  temp = (int *) malloc (lista->tamano * sizeof (int));
	  for (int i = 0; i <= lista->tamano; i++)
	    {
	      *(temp + i) = *(lista->dato + i);
	    }
	  lista->tamano = lista->tamano * 2;
	  lista->dato = (int *) malloc (lista->tamano * sizeof (int));
	  for (int o = 0; o <= lista->tamano; o++)
	    {
	      *(lista->dato + o) = *(temp + o);
	    }
	  *(lista->dato + lista->n) = dato;
	  free (temp);
	}
      else
	{
	  *(lista->dato + lista->n) = dato;
	}
    }
  return lista;
}


struct lista *
eliminarLista (struct lista *lista)
{
  int *temp = NULL;
  (lista->n)--;
  if (lista->n == (lista->tamano / 2))
    {
      temp = (int *) malloc (lista->n * sizeof (int));
      for (int i = 0; i <= lista->n; i++)
	{
	  *(temp + i) = *(lista->dato + i);
	}
      lista->tamano = lista->tamano / 2;
      lista->dato = (int *) malloc (lista->tamano * sizeof (int));
      for (int o = 0; o <= lista->tamano; o++)
	{
	  *(lista->dato + o) = *(temp + o);
	}

      return lista;
    }

  return lista;
}

struct lista *
mostrarLista (struct lista *lista)
{
  if (lista == NULL)
    {
      printf ("\n");
      return lista;
    }
  for (int i = 0; i <= lista->n; i++)
    {
      printf ("%d ", *(lista->dato + i));

    }


  return lista;
}
