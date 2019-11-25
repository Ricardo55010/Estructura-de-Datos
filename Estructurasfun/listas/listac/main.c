#include"listac.h"

int
main (void)
{
  struct lista *lista = NULL;
  lista = agregarLista (lista, 1);
  lista = agregarLista (lista, 2);
  lista = agregarLista (lista, 3);
  lista = agregarLista (lista, 4);
  lista = agregarLista (lista, 5);
  lista = eliminarLista (lista);
  lista = eliminarLista (lista);
  lista = mostrarLista (lista);

  return 0;
}
