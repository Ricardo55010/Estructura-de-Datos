#include"listac.h"

int
main (void)
{
  struct lista lista;
  lista.tamano = 1;
  int numero = 0;
  int opcion = 0;
  do
    {
      printf
	("Que opcion desea realizar \n 1.Agregar 2.Eliminar 3.Mostrar 4.Salir\n");
      scanf ("%d", &opcion);

      switch (opcion)
	{
	case 1:
	  printf ("Ingrese el numero a agregar\n");
	  scanf ("%d", &numero);
	  agregarLista (&lista, numero);
	  break;
	case 2:
	  eliminarLista (&lista);
	  break;
	case 3:
	  mostrarLista (&lista);
	  break;
	case 4:
	  printf ("Saliendo del programa\n");
	  break;
	default:
	  printf ("Opcion no disponible\n");
	  break;



	}
    }
  while (opcion != 4);

  return 0;
}
