#include <stdio.h>
#include <stdlib.h>


void conteoRecursivo(int n1, int n2){

if(n1<=n2){

    FILE * salida;
    salida = fopen("salida.txt", "a");

    fprintf(salida, "%d ", n1);
    fclose(salida);
    n1++;
    conteoRecursivo(n1, n2);
}

}

int main()
{
    printf("Leo los dos argumentos del archivo \n");

    FILE * argumentos;
    argumentos = fopen("argumentos.txt", "r");

    /*
    //Esta seria una buena forma de leer archivos con char, usaremos solo la forma para leer numeros
    char numero1[3] = " ";
    char numero2[3] = " ";
    char auxLectura[50] = " ";

    fgets(auxLectura, 58, argumentos);

    sscanf(auxLectura, "%[^;];%[^\n]", numero1, numero2);
    fflush(stdin);


    printf("Los numeros leidos del archivo fueron: %s   y el   %s  \n", numero1, numero2);
    //recuerden que para pasar char a int pueden usar la funcion atoi(numero1)

    */

    //Usaremos esta forma que es mas simple puesto que solo son numeros int
    int numero1, numero2;

    //Leemos un int, un ; y otro int
    fscanf(argumentos, "%d;%d", &numero1, &numero2);
    //muestro que esta bien la lectura
    printf("Los numeros leidos del archivo fueron: %d   y el   %d  \n", numero1, numero2);

    //cierro la lectura
    fclose(argumentos);



    FILE * salida;
    salida = fopen("salida.txt", "w");
    fclose(salida);
    conteoRecursivo(numero1, numero2);


    return 0;
}
