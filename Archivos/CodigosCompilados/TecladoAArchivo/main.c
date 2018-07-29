#include <stdio.h>
#include <stdlib.h>
//Lo tecleado al archivo

int main()
{
//punmtero a un archivo
FILE *fp;

//defino un caracter
char caracter;

//pido un caracter
printf("\nIntroduce caracter:\n");
 scanf("%c",&caracter); //guardo el caracter

 //Abro elarchivo para escribirlo
 //Notar que si no existe el archivo lo crea
 fp=fopen("caracter.txt","w");
 //escribo en el archivo
fputc(caracter,fp);

//cierro el archivo
fclose(fp);


printf("\nCaracter guardado en el fichero!!\n");
system("PAUSE");
return 0;
}
