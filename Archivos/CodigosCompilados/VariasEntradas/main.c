#include <stdio.h>
#include <string.h>

int main()
{
    //puntero a un archiv
   FILE* ptFichero;
   //defino la cadena que marca el fin
   char fin[]="fin";
   //Maximo para cada frase
   char frase[60];


   //Abro el archivo para escribir
   ptFichero = fopen("registroDeUsuario.txt", "wt");

   printf(" PROGRAMA para ESCRIBIR FRASES.\nCuando quiera salir,"
          "escriba la palabra fin.\n\n");

   do
   {
      puts("\nEscriba una FRASE:\n(o fin). \n");
      gets(frase);
      if (strcmp(frase, fin) == 0)
         break;
      fprintf(ptFichero, "%s\n", frase);
   }
   while (strcmp(frase, fin) != 0);

   fclose(ptFichero);
   return 0;
}
