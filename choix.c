#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void ordonnerTableau(double tableau[], int tailleTableau);
void afficheNouveauTableau(double tableau[], int tailleTableau);
 
int main(int argc, char *argv[])
{
    double tableau[6][2] = {{12.56,7.26,23.48,15.58,16.3,14.72},
                            {0,0,0,0,6,4}};
    afficheNouveauTableau(tableau,6);
    ordonnerTableau(tableau,6);
    afficheNouveauTableau(tableau,6);
    return 0;
}
void afficheNouveauTableau(double tableau[], int tailleTableau)
{
    int k;

    for (k = 0 ; k < tailleTableau ; k++)
 {
        fprintf(stdout, " %2.2f ", tableau[k]);
    }
    fprintf(stdout, "\n");
}

void ordonnerTableau(double tableau[], int tailleTableau)
{
    int i = 0;
    float temp = 0.0;
int erreur = 0;

    do
    {
        erreur=0;


        for(i=0;i<tailleTableau-1;i++)
            {
                if(tableau[i]>tableau[i+1])
 {
                    erreur=1;
                    temp=tableau[i];
                    tableau[i]=tableau[i+1];
                    tableau[i+1]=temp;
                    afficheNouveauTableau(tableau,6);
 
                }
 
            }
   }
    while (erreur!=0);
}

    

