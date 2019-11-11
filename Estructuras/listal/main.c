#include"listal.h"

int
main ()
{
  int dato = 0;
  int opcion = 0;
  struct head *head = NULL;
  do
    {

      printf
	("que desea realizar \n1.Agregar 2.Eliminar 3.Mostrar 4.Salir \n ");

      scanf ("%d", &opcion);

      switch (opcion)
	{
	case 1:
	  printf ("Ingrese el dato agregar\n");
	  scanf ("%d", &dato);
	  head = agregarLista (head, dato);

	  break;
	case 2:

	  eliminarLista (head);
	  break;
	case 3:
	  mostrarLista (head);
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
