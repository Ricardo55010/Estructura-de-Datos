#include"arbol.h"

int
main (void)
{
  struct Arbol *raiz = NULL;
  int opcion = 0;
  int numero = 0;
  do
    {

      printf
	("\nQue desea realizar \n 1.Agregar 2. Eliminar 3.Mostrar 4.Salir\n");
      scanf ("%d", &opcion);
      switch (opcion)
	{
	case 1:
	  printf ("Ingrese el numero a insertar\n");
	  scanf ("%d", &numero);
	  raiz = insertar (raiz, numero);
	  break;
	case 2:
	  break;
	case 3:
	  mostrar (raiz);
	  break;
	case 4:
	  printf ("Saliendo del sistema\n");
	  break;
	default:
	  printf ("No existe esa opcion \n");
	  break;
	}
    }
  while (opcion != 4);
  return 0;
}
