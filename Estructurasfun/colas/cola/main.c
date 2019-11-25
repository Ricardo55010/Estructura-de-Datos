#include"cola.h"

int
main ()
{
  struct head *head = NULL;
  head = agregarCola (head, 1);
  head = agregarCola (head, 2);
  head = agregarCola (head, 3);
  head = agregarCola (head, 4);
  head = agregarCola (head, 5);
  head = eliminarCola (head);
  head = eliminarCola (head);
  head = mostrarCola (head);
  return 0;
}
