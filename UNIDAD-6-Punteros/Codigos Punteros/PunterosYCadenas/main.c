#include <stdio.h>

//defino el string A de 80 caracteres
char strA[80] = "Cadena a usar para el programa de ejemplo";
//Y otro mas B
char strB[80];



int main(void)
{
 char *pA; /* un puntero al tipo caracter */
 char *pB; /* otro puntero al tipo caracter */



 printf("Elstring A es: ------%s \n" ,strA); /* muestra la cadena strA */
 pA = strA; /* apunta pA a la cadena strA */


 printf("El string A es con punteros: ----- %s \n" ,pA); /* muestra a donde apunta pA */


 pB = strB; /* apunta pB a la cadena strB */



 putchar('\n'); /* dejamos una línea en blanco */


 while(*pA != '\0') //Mientras el puntero A no apunte al final
 {
 *pB++ = *pA++; //hago que el puntero b apunte a lo mimo que el puntero  A
 }


 *pB = '\0'; //termino el puntero b
 printf("Al termina el string b quedo: %s", strB); /* muestra strB en la pantalla */


 return 0;
}
