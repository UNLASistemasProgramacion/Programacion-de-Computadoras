#include <stdio.h>
#include <string.h>

//Estrucutra localidad almacenada en el archivo localidades.txt

struct Localidad{
    char cod[2];
    char nombre[100];
    char codPostal[100];
};


//estructura persona, notar que esta en el arcvhivo personas.txt y tiene a una estructura anidada
struct Persona{
    char dni[8];
    char nombre[30];
    char direccion[70];
    struct Localidad loc;//Es la otra estructura
};


int main()
{
    /// Declaro las variables
    FILE *localidades;
    char lineaLocalidad[100], nombreLocalidad[100];
    int i=0;
    char encontrado;
    char codBuscado[2];
    struct Localidad l; //para la lectura
    struct Persona p;
    FILE * ptFichero = fopen("Personas.txt", "wt");

    /// Pido los datos por pantalla
    printf("DNI: ");
    scanf("%s", p.dni);
    printf("Nombre: ");
    scanf("%s", p.nombre);
    printf("Direccion: ");
    scanf("%s", p.direccion);
    printf("Localidad(ingrese el codigo): ");
    //Codigo de localidad a buscar en el archivo
    scanf("%s", codBuscado);

    //abro localidades para lectura
    localidades = fopen("Localidades.txt", "rt");
    //voy al inicio del archivo
    rewind(localidades);
    //bandera para encontrarlo
    encontrado = 'n';

    //mientras no sea encontrado y no sea fin de archivo
    while ((!feof(localidades)) && (encontrado!='s')){

        //hago lo de la clase pasada, busco los delimitadores y sus posiciones
        int ubicacionPrimerDelimitador = 0;
        int ubicacionSegundoDelimitador = 0;

        //Inicio los campos vacios
        strcpy(l.cod, " ");
        strcpy(l.nombre, " ");
        strcpy(l.codPostal, " ");

        //Leo linea por linea
        fgets(lineaLocalidad, 100, localidades);

        //busco primer delimitador
        for (i = 0; i<100; i++){
            if(lineaLocalidad[i]==';'){
                ubicacionPrimerDelimitador = i;
                i=100;
            }
        }

        //busco el segundo delimitador
        for (i = ubicacionPrimerDelimitador+1; i<100; i++){
            if(lineaLocalidad[i]==';'){
                ubicacionSegundoDelimitador = i;
                i=100;
            }
        }

        //Guardo lo primero en el codigo
        for (i = 0; i<ubicacionPrimerDelimitador; i++){
            l.cod[i] = lineaLocalidad[i];
        }



        int inicioNombre = 0;

        //luego guardo el nombre
        for (i = ubicacionPrimerDelimitador+1; i<ubicacionSegundoDelimitador; i++){
            l.nombre[inicioNombre] = lineaLocalidad[i];
            inicioNombre++;
        }


        int inicioCodPostal = 0;

        //Por ultimo guardo el codigo postal
        for (i = ubicacionSegundoDelimitador+1; i<100; i++){
            l.codPostal[inicioCodPostal] = lineaLocalidad[i];
            inicioCodPostal++;
        }


        if(strcmp(codBuscado,l.cod)==0){
            encontrado = 's';
        }//si el codigo buscado es igual al leido, pongo encontrado en S

    }

    if(encontrado =='s'){
        p.loc = l;
    } else{
        strcpy(p.loc.nombre,"Sin Localidad");
        strcpy(p.loc.codPostal,"Sin Localidad");
    }

    fclose(localidades);

    printf("%s, %s,%s,%s,%s", p.dni, p.nombre, p.direccion, p.loc.nombre,p.loc.codPostal);

    fprintf(ptFichero, "%s, %s,%s,%s,%s\n", p.dni, p.nombre, p.direccion, p.loc.nombre,p.loc.codPostal);


    return 0;
}
