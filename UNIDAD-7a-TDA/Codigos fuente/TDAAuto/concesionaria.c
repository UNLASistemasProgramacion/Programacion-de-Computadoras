#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "auto.h"
#include "concesionaria.h"


struct ConcesionariaEstructura{

        char direccion[20];
        int altura;
        char nombre[20];
        Auto autos[20]; //Puede tener hasta 20 autos
        int cantidadDeAutos;


};


Concesionaria crearConcesionaria (char d[20], int a, char n[20]){

struct ConcesionariaEstructura * concesionaria = malloc(sizeof(struct ConcesionariaEstructura));


strcpy(concesionaria->direccion, d);
strcpy(concesionaria->nombre, n);
concesionaria->altura = a;
concesionaria->cantidadDeAutos = 0;


char opcion = 's';

while (opcion == 's'){
    printf("Desea cargar algun auto?  s/n   \n");
    scanf("%c", &opcion);


    if (opcion=='s'){
    concesionaria->autos[concesionaria->cantidadDeAutos] = crearAutoPorTeclado();
    concesionaria->cantidadDeAutos = concesionaria->cantidadDeAutos+1;
    }






}






return concesionaria;


}

void mostrarConcesionaria(Concesionaria c){

printf("%s---------%d-------------%s\n", c->direccion, c->altura, c->nombre);

if(c->cantidadDeAutos>0){

        printf("----------AUTOS DE LA CONCESIONARIA-----------\n");

        for (int i = 0; i<c->cantidadDeAutos; i++){

        imprimir(c->autos[i]);


        printf("\n-------------------------------------------\n");

}//cierra el for

}//Cierra el if

}



