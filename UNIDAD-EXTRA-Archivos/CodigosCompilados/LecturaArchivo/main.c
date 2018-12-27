#include <stdio.h>

int main()
{

    //puntero a archivo
FILE *fp;

//defino el caracter que voy a leer
char leido;
//arbro el archivo para leer
fp=fopen("archivo.txt","r");

//leo un caracter
leido=fgetc(fp);
//cierro el archivo
fclose(fp);

printf("\nEl Caracter Leido es: %c\n",leido);
 system("PAUSE");
return 0;
}
