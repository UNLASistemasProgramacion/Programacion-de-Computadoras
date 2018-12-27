#include <stdlib.h>
#include "ListaEnc.h"
#include "persona.h"




int main() {



    Persona p1 = crearPersona();
    Persona p2 = crearPersona();
    Persona p3 = crearPersona();
    Persona p4 = crearPersona();
    Persona p5 = crearPersona();


     //CREO LA LISTA CON LA QUE VOY A TRABAJAR
    ListaEnc* miLista = crearLista();


    //INSERTO AL PRINCIPIO
    insertarInicio(miLista, p1);
    //INSERTO EL 5 AL FINAL
    insertarFin(miLista, p2);
    //INSERTO EN LA POSICION 1 EL 4
    insertar(miLista, p3,1);
    //INSERTO AL FINAL
    insertarFin(miLista, p4);



    //MUESTRO LO QUE HAY EN LA POSICION 2, ES DECIR EL 5
    Persona p;
    obtenerElemento(miLista, &p, 2);
    mostrarPersona(p);




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
