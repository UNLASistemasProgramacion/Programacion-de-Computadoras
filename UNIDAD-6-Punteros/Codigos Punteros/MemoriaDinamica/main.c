#include "header.h"

int main()
    {
    setlocale(LC_CTYPE,"Spanish");

    //AL ASIGNAR MEMORIA DE FORMA DINÁMICA, SE ESTÁ UTILIZANDO UN ESPACIO DE LA MEMORIA QUE SE CONOCE COMO HEAP
    //ES DE LIBRE ACCESO PARA EL PROGRAMADOR
    //QUIEN ES EL RESPONSABLE DE SU LIBERACIÓN



    t_alumno *al;

    al=(t_alumno*)malloc(sizeof(t_alumno));//asigno menoria en forma dinámica
    al->dni=36415938;
    strcpy(al->apellido,"Perez");
    strcpy(al->nombre,"Nicolas Ignacio");
    al->promedio=2;


    //free(al);//libero memoria
    //si bien libero la memoria puedo seguir accediéndolo.. la liberación no borra los datos, solamente desvincula el espacio de memoria para que pueda ser nuevamente adjudicada


    puts("\n\n \t\t ALUMNO ");
    printf("\n\n DNI: %d \t Alumno: %s, %s \t Promedio: %.2f \n",al->dni,al->apellido,al->nombre,al->promedio);

    free(al);

    int n,i;
    t_alumno *alus;
    printf("\n memoria para cuántos alumnos reservo? \t ");
    scanf("%d",&n);
    if(n==0)
        exit(1);
    alus=(t_alumno*)calloc(n,sizeof(t_alumno));//asigno memoria con calloc

    puts("\n\n ALUMNOS");
    for(i=0;i<n;i++)
        printf("\n\n DNI: %d \t Alumno: %s, %s \t Promedio: %.2f \n",al->dni,al->apellido,al->nombre,al->promedio);

    realloc(alus,sizeof(t_alumno)*(n/=2));//reasigna los primeros 5 elementos-->> el espacio restante lo deja libre para el uso
    puts("\n\n ALUMNOS");
    for(i=0;i<n;i++)
        printf("\n\n DNI: %d \t Alumno: %s, %s \t Promedio: %.2f \n",al->dni,al->apellido,al->nombre,al->promedio);

    //t_alumno vec[10];

    //free(vec); no se puede hacer esto ya que free libera memoria reservada por el programador,
                // y esta memoria  le pertenece al compilador

    free(alus);

    t_alumno *ptr;
    ptr=(t_alumno*)realloc(NULL,2);//funciona como malloc
    realloc(ptr,0);//funciona como free

    printf("\n\n \t\t\t\t\t Fin del programa.. \n\n");
    getch();
    return 0;
    }
