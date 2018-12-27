#include <stdio.h>

int main()
{

//puntero al archivo
FILE *fp;
//defino la cadena
char cadena[]="Algoritmo y Estructura de Datos",leida[40];
//Abro el archivo y lo escribo
fp=fopen("ejemplo.txt","w");
fputs(cadena,fp);
//cierro la cadena
fclose(fp);

//abro el archivo otra vez para leerlo
fp=fopen("ejemplo.txt","r");

fgets(leida,sizeof(leida)/sizeof(char),fp);
//Cierro el archivo
fclose(fp);
//Nuesto el string leido
printf("\nCadena leida: %s\n",leida);

system("PAUSE");

return 0;
}
