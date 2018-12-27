#include <stdio.h>
#include <string.h>

int main()
{
   struct agenda
   {
      char nombre [21];
      char direccion [31];
      char celular[13];
      char email[31];
      unsigned short int dia, mes, anyo;
   }persona[100];

   FILE* fichero;
   char textoAux[21];
   int opcion, personas=0;
   int i, j;

   fichero = fopen("agenda.dat", "rt");
   if (fichero != NULL)
   {
        while (! feof(fichero))
        {
            fgets(textoAux, 20, fichero);
            if (feof(fichero)) break;
            if (strlen(textoAux) > 0)
                textoAux[strlen(textoAux) -1] = '\0';
            strcpy(persona[personas].nombre, textoAux);
            puts(persona[personas].nombre);

            fgets(textoAux, 20, fichero);
            if (feof(fichero)) break;
            if (strlen(textoAux) > 0)
                textoAux[strlen(textoAux) -1] = '\0';
            strcpy(persona[personas].direccion, textoAux);
            puts(persona[personas].direccion);

            fgets(textoAux, 20, fichero);
            if (feof(fichero)) break;
            if (strlen(textoAux) > 0)
                textoAux[strlen(textoAux) -1] = '\0';
            strcpy(persona[personas].celular, textoAux);
            puts(persona[personas].celular);

            fgets(textoAux, 20, fichero);
            if (feof(fichero)) break;
            if (strlen(textoAux) > 0)
                textoAux[strlen(textoAux) -1]  = '\0';
            strcpy(persona[personas].email, textoAux);
            puts(persona[personas].email);

            fgets(textoAux, 20, fichero);
            if (feof(fichero)) break;
            sscanf(textoAux, "%hd %hd %hd", &persona[personas].dia,
                &persona[personas].mes,
                &persona[personas].anyo);
            if ((persona[personas].dia == 0) || (persona[personas].mes == 0) ||
                (persona[personas].anyo == 0))
               break;
            puts(textoAux);
            personas++;
        }
        fclose(fichero);
    }
    if (personas == 0) printf("No hay ninguna ficha guardada.");
    else
       if (personas == 1) printf("He ahi la unica ficha guardada.");
       else
          printf("He ahi las %d fichas guardadas.", personas);
    do
    {
      puts("\n\n  MENU:\n");
      puts("1.- Agregar un nuevo dato.");
      puts("2.- Ver todos los datos existentes.");
      puts("3.- Ver todos los datos de una persona.");
      puts("0.- Terminar.");
      puts("   Elija una opcion: ");

      scanf("%d", &opcion);
      getchar();

      switch (opcion)
      {
         case 1:    /* Agregar un nuevo dato */
            printf ("nombre: ");
            gets (persona[personas].nombre);
            fprintf(fichero, "%s", persona[personas+1].nombre);
            printf ("Direccion: ");
            gets (persona[personas].direccion);
            fprintf(fichero, "%s", persona[personas+1].direccion);
            printf ("Celular: ");
            gets (persona[personas].celular);
            fprintf(fichero, "%s", persona[personas+1].celular);
            printf ("Correo electronico: ");
            gets (persona[personas].email);
            fprintf(fichero, "%s", persona[personas+1].email);
            printf ("Dia de nacimiento: ");
            scanf("%hd", &persona[personas].dia);
            fprintf(fichero, "%hd", persona[personas+1].dia);
            printf ("Mes de nacimiento: ");
            scanf ("%hd", &persona[personas].mes);
            fprintf(fichero, "%hd", persona[personas+1].mes);
            printf ("Año de nacimiento: ");
            scanf ("%hd", &persona[personas].anyo);
            fprintf(fichero, "%hd", persona[personas].anyo);
            personas ++;
            break;

         case 2:    /* Ver todos los nombres */
            j = 0;
            puts ("Ver todos los nombres existentes:");
            for (i=0; i<=personas; i++)
            {
               puts (persona[i].nombre);
               j ++;
            }
            if (j == 0)
               printf("No hay ningun nombre guardado.");
            break;

         case 3:    /* Ver todos los datos de una persona */
            puts("Nombre a buscar:");
            gets(textoAux);
            j = 0;
            for (i=0; i<=personas; i++)
            {
               if (strcmp (textoAux, persona[i].nombre) == 0)
               {
                  puts (persona[i].nombre);
                  if (strcmp(persona[i].nombre, "") == 0)
                     break;
                  puts (persona[i].direccion);
                  puts (persona[i].celular);
                  puts (persona[i].email);
                  printf("%hd %hd %hd.\n", persona[i].dia,
                     persona[i].mes, persona[i].anyo);
                  j ++;
               }
            }
            if (j == 0)
               printf("No existe esa ficha.");
            break;
         }
       }
       while (opcion != 0);

       fichero = fopen("agenda.dat", "wt");
       for (i=0; i<=personas; i++)
       {
          fprintf (fichero, "%s\n", persona[i].nombre);
          fprintf (fichero, "%s\n", persona[i].direccion);
          fprintf (fichero, "%s\n", persona[i].celular);
          fprintf (fichero, "%s\n", persona[i].email);
          fprintf (fichero, "%hd %hd %hd\n",
             persona[i].dia, persona[i].mes, persona[i].anyo);
       }
       fclose(fichero);
       return 0;

 }


