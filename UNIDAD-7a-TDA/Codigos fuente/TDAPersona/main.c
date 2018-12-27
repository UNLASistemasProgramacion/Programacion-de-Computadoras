#include <stdio.h>
#include <stdlib.h>
#include "persona.h"



int main(void) {



    Persona persona1 = crear("Nicolas", "Perez", 28, 81.7f, 35415999);
    imprimir(persona1);

    printf("\n\n-----Muestro la edad con el get----\n");
    printf("%d es la edad\n", getEdad(persona1));


    //el get es necesario para llegar al dato
    //printf("%d es la edad\n", (*persona1).edad);//


    printf("\n-----Modifico la edad con el set y la muestro----\n");
    setEdad(persona1, 90);
    printf("%d es la edad\n", getEdad(persona1));





    return 0;
}
