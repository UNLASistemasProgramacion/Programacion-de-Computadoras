#include <stdio.h>




int main (void)
{

            int j, k;

            //creo un puntero a un entero que se llama ptr
            int *ptr;
            int *ptr2;

            //les damos dos valores iniciales a j y k
             j = 1;
             k = 2;

             //guardo en ptr la direccion de memoria de k
             ptr = &k;

             printf("Miren cuidadosamente lo siguiente \n");
             printf("j tiene el valor: %d y esta alojado en: %p\n", j, &j);
             printf("k tiene el valor: %d y esta alojado en: %p\n", k, &k);
             printf("ptr tiene el valor: %p y esta alojado en: %p\n", ptr, &ptr);
             printf("El valor del entero al que apunta ptr es: %d\n", *ptr);
             printf("El valor del entero al que apunta ptr2 es: %d\n", *ptr2);


             return 0;
}
