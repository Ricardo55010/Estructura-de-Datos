#include"pila.h"

int
main ()
{
  struct head *head = NULL;
  head = push (head, 1);
  head = push (head, 2);
  head = push (head, 3);
  head = push (head, 4);
  head = push (head, 5);
  head = pop (head);
  head = pop (head);
  head = mostrar (head);

  return 0;
}
