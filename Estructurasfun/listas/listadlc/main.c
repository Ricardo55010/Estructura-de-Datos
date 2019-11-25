#include"listaDoblementeCircular.h"

int
main ()
{
  struct head *head = NULL;
  head = agregarLista (head, 1);
  head = agregarLista (head, 2);
  head = agregarLista (head, 3);
  head = agregarLista (head, 4);
  head = agregarLista (head, 5);
  head = eliminarLista (head);
  head = eliminarLista (head);
  head = mostrarLista (head);

  return 0;
}
