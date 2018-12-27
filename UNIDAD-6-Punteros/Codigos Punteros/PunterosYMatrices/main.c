#include <stdio.h>

//defino el tamaño dela matriz 5x10

#define RENGLONES 5
#define COLUMNAS 10

//Declaro la matriz
int multi[RENGLONES][COLUMNAS];

int main(void)
{

 //genero los indices para recorrer los renglones y columnas
 int renglon, columna;

 //recorro los renglones
 for (renglon = 0; renglon < RENGLONES; renglon++)
 {
 //recorro las columnas
 for (columna = 0; columna < COLUMNAS; columna++)
 {
//escribo esa posicion con la multiplicacion de renglon x columna
 multi[renglon][columna] = renglon*columna;
 } //Cierro el recorrido de la columan
 }//cierro el recorrido del renglon


 //Muestro la matriz como siempre
 for (renglon = 0; renglon < RENGLONES; renglon++)
 {
 for (columna = 0; columna < COLUMNAS; columna++)
 {
 printf("    %d     ",multi[renglon][columna]);

 }
 printf("\n");
 }

  printf("\n\n\n------------------------------------------------------------------------------\n\n\n");

 //Muestro pero usando punteros

 for (renglon = 0; renglon < RENGLONES; renglon++)
 {
 for (columna = 0; columna < COLUMNAS; columna++)
 {

 printf("    %d    ",*(*(multi + renglon) + columna));
 }
 printf("\n");
 }
 return 0;
}
