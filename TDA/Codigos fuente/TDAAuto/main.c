#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "empleados.h"



int main(void) {



    Auto auto1(2000, "Renault", 3);

	imprimir (auto1);

    Auto auto2 = crearAutoPorTeclado();

imprimir (auto2);




    return 0;
}
