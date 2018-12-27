#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fichero;
   int i,j, matriz[10][10];

   /* inicializa matriz a 0 */
   for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
	 matriz[i][j] = 0;




   fichero = fopen("origen.txt","r");
   if (fichero==NULL)
   {
      printf( "No se puede abrir el fichero.\n" );
      system("pause");
      exit (EXIT_FAILURE);
   }


   i = 0;
   while (1)
   {
      if (feof(fichero))
	 break;
      fscanf (fichero, "%d %d %d %d %d\n", &matriz[i][0], &matriz[i][1], &matriz[i][2], &matriz[i][3], &matriz[i][4]);
      i++;
   }
   fclose(fichero);

   printf( "Contenido del fichero:\n" );
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++)
	 printf ("%d ", matriz[i][j]);
      printf ("\n");
   }

   return EXIT_SUCCESS;
}
