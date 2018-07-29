#include <stdio.h>
#include <string.h>

int main()
{
   FILE* ficheroU;
   char frase[61];
   int i=0;

   ficheroU = fopen("frases.txt", "wt");
   printf(" PROGRAMA para ESCRIBIR y almacenar FRASES.\n"
      "Cuando quiera salir, simplemente pulse \"Intro\".\n\n");
   do
   {
      if (i == 0)
         puts("\nEscriba una FRASE:\n(o pulse \"Intro\"). \n");
      else
         puts("\nEscriba otra FRASE:\n(o pulse \"Intro\"). \n");
      gets(frase);
      fprintf(ficheroU, "%s\n", frase);
      i++;
   }
   while (strcmp(frase, "") != 0);
   printf("He aqui lo que escribio:\n\n");
   fclose(ficheroU);

   ficheroU = fopen("frases.txt", "rt");
   do
   {
      fgets(frase, 60, ficheroU);
      puts(frase);
   }
   while (!feof(ficheroU));
   getchar();
   printf("...Hasta luego!");
   getchar();
   fclose(ficheroU);

   return 0;
}


