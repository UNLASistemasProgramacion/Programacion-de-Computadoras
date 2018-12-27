#include <stdio.h>
#include <stdlib.h>
//Lee dos caracteres del primer archivo y los copia en el 2do archivo


int main()
{

//Declaramos dos punteros a dos archivos
FILE *fp1,*fp2;

//declaramos dos char
char c1,c2;

//abrimos el primer archivo
//para la lectura r
fp1=fopen("archivo.txt","r");

//si no existe lanzamos el error
if(fp1==NULL)
{
printf("Error al abrir el archivo para leer");
system("PAUSE");
exit(1);
}



//Abrimos el otro archivo
//para la escritura
fp2=fopen("copia.txt","w");
//Lanzamoos el error
if(fp2==NULL)
{
printf("Error al abrir el archivo copia.txt"); system("PAUSE");
exit(1);
}

//scaneamos en el archivo 1(leemos) y escribimos en el 2
fscanf(fp1,"%c%c",&c1,&c2);
fprintf(fp2,"%c%c",c1,c2);

//cerramos ambos
fclose(fp1);
fclose(fp2);
return 0;
}
