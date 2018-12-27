#include <stdio.h>
#include <stdlib.h>

#include "evento.h"
#include "empleado.h"


Evento vectorDeEvento[100];


//Funciones hechas en el main
Evento crearEventoDesdeChar(char aux[100]);
void cargarVectorDeEventos();
void mostrarEventos();

Empleado crearEmpleadoDesdeChar(char aux[100]);


int main()
{
    printf("Bienvenido al sistema \n");


   cargarVectorDeEventos();
    mostrarEventos();

    return 0;
}












//Funciones: Podrian ponerlas en el TDA si quieren hacerlo aun mejor.


void cargarVectorDeEventos(){
    FILE * evento;
    evento = fopen("evento.txt", "r");

    //indice para recorrer el vector de eventos
    int i = 0;

    while(!feof(evento)){




        fflush(stdin);
        char auxLectura[100] = " ";



        fgets(auxLectura, 100, evento);


        Evento e = crearEventoDesdeChar(auxLectura);

        vectorDeEvento[i] = e;
        i++;

        }


    fclose(evento);
}






Evento crearEventoDesdeChar(char aux[100]){


        int ubicacionPrimerDelimitador = 0;
        int ubicacionSegundoDelimitador = 0;

        char auxNombre[100] = " ";
        char auxCant[100] = " ";
        char auxCod[100] = " ";

        for (int i = 0; i<100; i++){

            if(aux[i]==','){
                    ubicacionPrimerDelimitador = i;
                    i=100;
            }


        }


        for (int i = ubicacionPrimerDelimitador+1; i<100; i++){

            if(aux[i]==','){ ubicacionSegundoDelimitador = i;
            i=100;}

         }




         for (int i = 0; i<ubicacionPrimerDelimitador; i++){
            auxNombre[i] = aux[i];
         }



         int inicioCant = 0;

         for (int i = ubicacionPrimerDelimitador+1; i<ubicacionSegundoDelimitador; i++){

         auxCant[inicioCant] = aux[i];
         inicioCant++;
         }

        int inicioCod = 0;

         for (int i = ubicacionSegundoDelimitador+1; i<100; i++){
            auxCod[inicioCod] = aux[i];
            inicioCod++;
         }



         Evento e = crearEvento(auxNombre, atoi(auxCant), atoi(auxCod));


return e;
}


void mostrarEventos(){


   for (int i = 0; i<100;i++){


        mostrarEvento(vectorDeEvento[i]);

    }

}




Empleado crearEmpleadoDesdeChar(char aux[100]){


        int ubicacionPrimerDelimitador = 0;
        int ubicacionSegundoDelimitador = 0;

        char auxNombre[100] = " ";
        char auxApellido[100] = " ";
        char auxCod[100] = " ";

        for (int i = 0; i<100; i++){

            if(aux[i]==','){
                    ubicacionPrimerDelimitador = i;
                    i=100;
            }


        }


        for (int i = ubicacionPrimerDelimitador+1; i<100; i++){

            if(aux[i]==','){ ubicacionSegundoDelimitador = i;
            i=100;}

         }




         for (int i = 0; i<ubicacionPrimerDelimitador; i++){
            auxNombre[i] = aux[i];
         }



         int inicioCant = 0;

         for (int i = ubicacionPrimerDelimitador+1; i<ubicacionSegundoDelimitador; i++){

         auxApellido[inicioCant] = aux[i];
         inicioCant++;
         }

        int inicioCod = 0;

         for (int i = ubicacionSegundoDelimitador+1; i<100; i++){
            auxCod[inicioCod] = aux[i];
            inicioCod++;
         }



         Empleado e = crearEmpleado(auxNombre, auxApellido, atoi(auxCod));


return e;
}






