#include"colac.h"
struct lista *
agregarLista (struct lista *lista, int dato)
{
  if (lista == NULL)
    {
      printf ("Creando lista\n");
      lista = (struct lista *) malloc (sizeof (struct lista));
      lista->tamano = 7;
      for (int i = 0; i <= lista->tamano; i++)
	{
	  lista->marcas[i] = 0;
	}

      lista->n = 0;
      lista->dato = (int *) malloc (lista->tamano * sizeof (int));
      *(lista->dato + lista->n) = dato;
      lista->marcas[lista->n] = 1;
    }
  else
    {

      (lista->n)++;
      if (lista->marcas[lista->n] == 1)
	{
	  printf ("Ya se lleno la cola\n");
	  return lista;


	}
      printf ("Ingresando el dato en la posicion %d\n", lista->n);
      if (lista->n % 7 == 0)
	{
	  lista->n = 0;
	  *(lista->dato + lista->n) = dato;
	  lista->marcas[lista->n] = 1;

	}
      else
	{
	  *(lista->dato + lista->n) = dato;
	  lista->marcas[lista->n] = 1;
	}
    }
  return lista;
}


struct lista *
eliminarLista (struct lista *lista)
{
lista->marcas[lista->n]=0;


  return lista;
}

struct lista *
mostrarLista (struct lista *lista)
{
  for (int i = 0; i <= lista->n; i++)
    {
      printf ("%d ", *(lista->dato + i));

    }


  return lista;
}
