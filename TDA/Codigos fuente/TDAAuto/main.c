#include <stdio.h>
#include <stdlib.h>
#include "auto.h"



int main(void) {


    Auto auto1 = crear(2000, "Renault", 5);
    imprimir(auto1);

    printf("\nPedimos un nuevo auto pero por teclado: \n");
    Auto auto2 = crearAutoPorTeclado();
    imprimir(auto2);





    return 0;
}
