#include <stdio.h>
#include <stdlib.h>
#define COLUMNAS 5

//Defino un tipo de dato vector de 5 elementos

typedef int Arreglo_de_renglones[COLUMNAS];

//Declaro el puntero a este tipo de dato
Arreglo_de_renglones *rptr;

int main(void)
{
 //Declaro la cantidad de renglones
 int nrenglones = 10;
 //Genero los indices
 int renglon, columna;

 //Solitito memoria por medio de malloc, esta memoria ocupa nrenglones x columnas lugares donde en cada lugar habra un entero
 rptr = malloc(nrenglones * COLUMNAS * sizeof(int));

 //recorro los renglones
 for (renglon = 0; renglon < nrenglones; renglon++)
 { //recorro las columnas
 for (columna = 0; columna < COLUMNAS; columna++)
 {
     //asigno un numero a esa posicion de la matriz
 rptr[renglon][columna] = 17;
 }
 }


 //Muestro la matriz
  //recorro los renglones
 for (renglon = 0; renglon < nrenglones; renglon++)
 { //recorro las columnas
 for (columna = 0; columna < COLUMNAS; columna++)
 {
     //asigno un numero a esa posicion de la matriz
 printf("%d", *(*(rptr+renglon)+columna));
 }
 printf("\n");
 }




 return 0;
}
