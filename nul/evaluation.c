#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define WORD_SIZE_MAX 30

char tableau[7][3];

// ira dans initialise_tableau.c
bool initialise_tableau(int i_max, int j_max)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < i_max; i++)
    {
        for (j = 0; j < j_max; j++)
        {
            tableau[i][j] = '0';
        }
    }
    return true;
}

// int main(void)
// {
//     int i = 0;
//     int j = 0;

//     for (i = 0; i < 7; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             fprintf(stdout, "%d ", tableau[i][j]);
//         }

//         fprintf(stdout, "\n");
//     }

//     delimitage();

//     return 0;
// }

short int delimitage(char *nomFichier)
{
    FILE *fichier = NULL;
    int i = 0;
    int j = 0;
    //int b=0;

    fichier = fopen(nomFichier, "r");

    if (fichier != NULL)
    {
        printf("reading");
        char *mot;
        char ligne[WORD_SIZE_MAX];

        while (fgets(ligne, sizeof(ligne), fichier) != NULL && !feof(fichier))
        {
            fprintf(stdout, "Affichage de ligne : %s\n", ligne);

            mot = strtok(ligne, ",");
            fprintf(stdout, "Affichage de mot : %s\n", mot);

            mot = strtok(NULL, ",");
            fprintf(stdout, "affichage de la ligne 2: %s\n", mot);

            for (i = 0; i < 7; i++)
            {

                for (j = 0; j < 3; j++)
                {
                    while (mot != NULL)
                    {
                        mot = strtok(ligne, ",");
                        tableau[i][j] = mot;
                        fprintf(stdout, "%d", tableau[i][j]);
                    }
                }
            }

            /**
		//fgets (,  , fichier);
		mot = strtok(ligne, ",");
		//while (mot != NULL)
		{
		    if (b==0)
		    {
			mot = strtok(ligne, ",");
			fprintf(stdout, "Lecture de  %s\n", mot); b=1;
			tableau[mot]
		    }
		    else
		    {
			fprintf(stdout, "Lecture des valeurs:  %s\n", mot);
			mot = strtok(NULL, ",");
		    }
		}
	    //b=0;
         
**/

            fclose(fichier);
        }
    }
    else
    {
        fprintf(stdout, "Fichier CSV non trouve\n");
    }

    return EXIT_SUCCESS;
}
