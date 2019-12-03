#include <stdio.h>
#include <stdlib.h>
void ordonnerTableau(int tableau[], int tailleTableau);
void afficheNouveauTableau(int tableau[], int tailleTableau);
 
int main(int argc, char *argv[])
{
    int tableau[6] = {0,0,3,0,2,0};
    afficheNouveauTableau(tableau,6);
    ordonnerTableau(tableau,6);
    afficheNouveauTableau(tableau,6);
    return 0;
}
void afficheNouveauTableau(int tableau[], int tailleTableau)
{
    int k;
 
    for (k = 0 ; k < tailleTableau ; k++)
    {
        printf("%d-", tableau[k]);
    }
    printf("\n");
 
}
void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i,temp,erreur;
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
