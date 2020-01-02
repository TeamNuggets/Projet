#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define WORD_SIZE_MAX 30

// ira dans initialise_tableau.h
bool initialise_tableau(int, int);

short int delimitage(void);

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
            tableau[i][j] = "0";
        }
    }

    for (j = 0; j < j_max; j++)
    {
        tableau[i][j] = tableau[2][j];
        j == j + 5;
    }

    return true;
}

int main(void)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            fprintf(stdout, "%d ", tableau[i][j]);
        }

        fprintf(stdout, "\n");
    }

    //delimitage();

    return 0;
}

/*char choix (void)
{
    fprintf(stdout, "Taper 1 pour ordonner en fonction du prix et 2 pour ordonner en fonction du label");
    int c;
    c = scanf("%d", &c);

    if (c == 1)
    {
	for (j=0; j<j_max; j++)
	{
	    tableau[i][j]=tableau[2][j];
	    j==j+5;
	}
    }
}
    
    */
