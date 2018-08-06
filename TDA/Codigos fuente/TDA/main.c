#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

int main(void) {
    Fraccion dosQuintos = crear(2, 5);
    imprimir(dosQuintos);

    Fraccion suma = sumar(dosQuintos, crear(2,5));
    imprimir(suma);
    Fraccion sumaSimplificada = simplificar(suma);
    imprimir(sumaSimplificada);

    return 0;
}
