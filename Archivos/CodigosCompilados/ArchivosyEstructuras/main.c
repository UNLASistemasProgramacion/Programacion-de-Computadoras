#include <stdio.h>

int main()
{

    //defino la etructura de datos
   struct datos
   {
      char nombre[21];
      int edad;
      char ciudad[21];
   }persona; //declaro una persona


   //puntero a un archivo
   FILE *fichero;
   //indice
   int i;


   //Abro el archivo
   fichero = fopen("gente.dat", "wt");

   //si el fichero es nulo lanzo el error
   if (fichero == NULL)
      printf("No se pudo abrir el archivo.\n");

      //sino pido la carga
   else
   {
      puts("Nombre:");
      gets(persona.nombre);
      fprintf(fichero, "%s ", persona.nombre);
      puts("Edad:");
      scanf("%d", &persona.edad);
      getchar();
      fprintf(fichero, "%d ", persona.edad);
      puts("Ciudad:");
      gets(persona.ciudad);
      fputs(persona.ciudad, fichero);
      fclose(fichero);
   }


   fichero = fopen("gente.dat", "rt");
   if (fichero == NULL)
      printf("No se pudo abrir el archivo.\n");
   else
   {
       while (!feof(fichero))

       {
         fgets(persona.nombre, 60, fichero);
         puts(persona.nombre);
         fscanf(fichero, "%d", &persona.edad);
         getchar();
         printf("%d", persona.edad);
         fgets(persona.ciudad, 60, fichero);
         puts(persona.ciudad);
       }
   fclose(fichero);
   }
   return 0;
}
