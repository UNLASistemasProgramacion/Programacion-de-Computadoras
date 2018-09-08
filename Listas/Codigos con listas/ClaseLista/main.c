#include <stdlib.h>
#include "ListaEnc.h"




int main() {

    //CREO LA LISTA CON LA QUE VOY A TRABAJAR
    ListaEnc* miLista = crearLista();


    //INSERTO EL 7 AL PRINCIPIO
    insertarInicio(miLista, 7);
    //INSERTO EL 5 AL FINAL
    insertarFin(miLista, 5);
    //INSERTO EN LA POSICION 1 EL 4
    insertar(miLista, 4,1);
    //INSERTO AL FINAL EL 3
    insertarFin(miLista, 3);
    //QUEDO EL 7   4   5    3


    //MUESTRO LO QUE HAY EN LA POSICION 2, ES DECIR EL 5
    int i;
    obtenerElemento(miLista, &i, 2);
    printf("El elemento en la posicion  2 es: %d\n", i);


    printf("Probamos el obtener tamaño \n");
    printf("Tamaño: %d", obtenerTamanio(miLista));


    printf("Esta vacia? \n");
    printf("Vacia: %d", estaVacia(miLista));



    //MUESTRO LA LISTA ENTERA
    imprimir(miLista);
    //SACO EL ULTIMO
    removerFin(miLista, NULL);
    //MUESTRO COMO QUEDO
    imprimir(miLista);
    //SACO EL 2 ELEMENTO
    remover(miLista, NULL, 2);
    //MUESTRO
    imprimir(miLista);
    //SACO EL PRIMERO
    removerInicio(miLista, NULL);
    //MUESTRO
    imprimir(miLista);
}
