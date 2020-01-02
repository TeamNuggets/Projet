#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

// ira dans initialise_taleau.h
bool initialise_tableau(int, int);

int tableau[7][3];

// ira dans initialise_tableau.c
bool initialise_tableau(int i_max, int j_max)
{
    int i = 0;
    int j = 0;

    for (i=0; i<i_max; i++)
    {
        for (j=0; j<j_max; j++)
        {
            tableau[i][j] = 0;
        }
    }
    return true;
}


int main (void)
{
    int i=0;
    int j=0;

    for (i=0; i<7; i++)
    {
        for (j=0; j<3; j++)
        {
            fprintf(stdout, "%d ", tableau[i][j]);
        }

        fprintf(stdout,"\n");
    }

return 0;
}
