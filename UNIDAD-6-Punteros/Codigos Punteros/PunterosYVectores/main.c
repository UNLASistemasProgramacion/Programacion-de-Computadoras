#include <stdio.h>


//creamos un vector de 6 enteros;
int mi_arreglo[] = {1,23,17,4,-5,100};
//hacemos un puntero a un entero
int *ptr;


int main(void)
{

 //definimos un indice i;
 int i;
 //hacemo que nuestro  puntero apunte al primer entero de nuestro vector
 //notar que es necesario el &
 ptr = &mi_arreglo[0];


 printf("El puntero apunta al valor: %d \n", mi_arreglo[0]);

 printf("El puntero apunta al valor: %d, estoy usando el * \n", *ptr);
 printf("El puntero apunta al valor: %d, estoy usando el & \n", &ptr);
 printf("El puntero apunta al valor: %d, no estoy usando nada \n", ptr);
  printf("El puntero apunta al valor: %p, no estoy usando nada y mascada p \n", ptr);

 printf("\n\n");
 //Mostramos todos los valores del vector por medio del puntero
 for (i = 0; i < 6; i++)
 {
 printf("mi_arreglo[%d] = %d ", i, mi_arreglo[i]);
 printf("ptr + %d = %d\n",i, *(ptr + i));
}
 return 0;
}
