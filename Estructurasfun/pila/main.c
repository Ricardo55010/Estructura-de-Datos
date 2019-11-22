#include"pila.h"

int
main ()
{
  int dato = 0;
  int opcion = 0;
  struct head *head = NULL;
  do
    {

      printf ("\nQue desea realizar \n1.Push 2.Pop 3.Mostrar 4.Salir \n ");

      scanf ("%d", &opcion);

      switch (opcion)
	{
	case 1:
	  printf ("Ingrese el dato agregar\n");
	  scanf ("%d", &dato);
	  head = push (head, dato);

	  break;
	case 2:

	  head = pop (head);
	  break;
	case 3:
	  mostrar (head);
	  break;
	case 4:
	  printf ("Saliendo del sistema \n");
	  break;
	default:
	  printf ("Esa opcion no existe\n");
	  break;
	}
    }
  while (opcion != 4);
  return 0;
}
