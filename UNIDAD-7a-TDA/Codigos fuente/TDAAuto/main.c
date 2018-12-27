#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "concesionaria.h"




int main(void) {



    Auto auto1 = crear(2000,"Renault", 3);

    printf("Mostramos el auto que creamos con CREAR(int modelo, char nombre, int cantChoques) \n");
	imprimir (auto1);

    printf("Creamos un auto ingresando todo por teclado: \n");
    Auto auto2 = crearAutoPorTeclado();


    printf("Mostramos el auto que ingresamos por teclado\n\n\n");
    imprimir (auto2);


    printf("------Creamos ahora una concesionaria-----\n");
    Concesionaria c = crearConcesionaria("29 de Septiembre", 1335, "Lo de Jorge");

    printf("Vemos la concesionaria creada");
    mostrarConcesionaria(c);



    return 0;
}
