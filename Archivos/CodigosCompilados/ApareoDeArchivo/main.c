#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-----APAREO DE ARCHIVO-----\n");

    FILE *archivo1;
    FILE *archivo2;
    FILE *archivo3;

    archivo1 = fopen("numero1.txt", "r");
    archivo2 = fopen("numero2.txt", "r");
    archivo3 = fopen("numero3.txt", "w");
    fclose(archivo3);
    archivo3 = fopen("numero3.txt", "a");


    //variables logicas
    int leer1 = 1;
    int leer2 = 1;





    int aux1 = 0;
    char aux1Char[4] = "";

    int aux2 = 0;
    char aux2Char[4] = "";

    while(1){



        if(leer1==1){
        fgets(aux1Char, 4, archivo1);
        aux1 = atoi(aux1Char);
        }

        if(leer2==1){
        fgets(aux2Char, 4, archivo2);
        aux2 = atoi(aux2Char);
        }


          if(aux1<=aux2){
            fprintf(archivo3, "%d\n", aux1);
            leer2=0;
            leer1=1;
        }

         if(aux2<aux1){
            fprintf(archivo3, "%d\n", aux2);
            leer2=1;
            leer1=0;
        }


        if(feof(archivo2)){

        fprintf(archivo3, "%d\n", aux2);


        while(!feof(archivo1)){



            fgets(aux1Char, 4, archivo1);
            aux1 = atoi(aux1Char);
            fprintf(archivo3, "%d\n", aux1);

        }
        break;
        }




        if(feof(archivo1)){

                fprintf(archivo3, "%d\n", aux1);


        while(!feof(archivo2)){

            fgets(aux2Char, 4, archivo2);
            aux2 = atoi(aux2Char);
            fprintf(archivo3, "%d\n", aux2);


        }
        break;
        }










    }



    return 0;
}
