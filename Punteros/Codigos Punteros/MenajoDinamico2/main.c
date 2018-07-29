#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  //defino el numero de renglones y de columnas
 int nrenglones = 5; /* Ambos, nrenglones y ncolumnas pueden ser */
 int ncolumnas = 10; /* evaluados o leídos en tiempo de ejecución */

 //indice renglon
 int renglon;

 //puntero a un puntero a un entero
 int **renglonptr;

 //reservo memoria para lo apuntado
 renglonptr = malloc(nrenglones * sizeof(int *));


 //Si no hay espacios a reservar entonces error
 if (renglonptr == NULL){
 puts("\nError al reservar espacio para punteros de renglon.\n");
 exit(0);
 }


 printf("\n\n\nIndice Puntero(hex) Puntero(dec) Dif.(dec)");
 //recorro los renglones
 for (renglon = 0; renglon < nrenglones; renglon++)
 {

 //reservo memoria para cada renglon, en funcion de las columnas
 renglonptr[renglon] = malloc(ncolumnas * sizeof(int));


 //Caso de error
 if (renglonptr[renglon] == NULL)
 {
 printf("\nError al reservar memoria para el renglon[%d]\n",renglon);
 exit(0);
 }


 printf("\n%d %p %d", renglon, renglonptr[renglon], renglonptr[renglon]);

 if (renglon > 0){
     printf(" %d",((int)renglonptr[renglon] - (int)renglonptr[renglon-1]));
 }

 }
 return 0;
}
