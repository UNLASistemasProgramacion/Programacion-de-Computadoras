#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//Estyructura a usar
struct persona{
int dni;
char nombre[20];
int edad;
}Personas[2], Copias[2];



//Carga personas leidas... recibe, un texto con comas y la persona a guardar
void cargarPersona(char lectura[30], int i);




int main(void)
{



    Personas[0].dni = 111; strcpy(Personas[0].nombre, "Nico"); Personas[0].edad = 28;
    Personas[1].dni = 22222; strcpy(Personas[1].nombre, "Brenda"); Personas[1].edad = 19;



    FILE * g;
    g = fopen("personas.txt", "w+");




    for(int i = 0; i<2; i++){
    fprintf(g,"%d,%d,%s\n",Personas[i].dni, Personas[i].edad, Personas[i].nombre);
        }


    fclose(g) ;



    /////////////////

    int i = 0;
    FILE * archivo;
    archivo = fopen("personas.txt", "r");


    while(!feof(archivo)){
    char lectura[30];


    fgets(lectura, 30, archivo);


    if(!feof(archivo)){
    printf("El renglon es: %s", lectura);
    cargarPersona(lectura, i);
    i++;
    }



    } //Cierra la lectura del archivo


    //Muestro lo que cargue desde el archivo
        for(int indice = 0; indice<i; indice++){
    printf("Persona cargana con DNI, %d, edad, %d, y nombre %s\n",Copias[indice].dni, Copias[indice].edad, Copias[indice].nombre);
        }


    return 0;
}



void cargarPersona(char lectura[30], int i){


   int tamanio = strlen(lectura);

    char dni[8] = ""; char edad[8] = ""; char nombre[25] = "";

    int finEdad;
    int finDNI;


    //for para encontrar la primer coma
    for (int j = 0; j<tamanio; j++){
            //Encontre primer coma
            if(lectura[j]==','){

                finDNI = j;

                j = tamanio;
                }
    }//cierra el for



    //for para encontrar la 2da coma
    for (int j = finDNI+1; j<tamanio; j++){
            //Encontre primer coma
            if(lectura[j]==','){

                finEdad = j;

                j = tamanio;
                }
    }//cierra el for



    //cargo el DNI
    for (int carga = 0; carga<finDNI; carga++){
        dni[carga] = lectura[carga];
    }


    //cargo la edad
    for (int carga = (finDNI+1); carga<finEdad; carga++){
        edad[carga-finDNI-1] = lectura[carga];
    }


    //cargo el nombre
    for (int carga = finEdad+1; carga<tamanio; carga++){
        nombre[carga-finEdad-1] = lectura[carga];
    }


    Copias[i].dni = atoi(&dni);
    Copias[i].edad =atoi(&edad);
    strcpy(Copias[i].nombre, nombre);


}

