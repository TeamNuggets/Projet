#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void afficheNouveauTableau(double tableau[], int tailleTableau);

int main(int argc, char *argv[])
{

int i;
int j;
double tableau[i][j];
int somme;
int nombre;

	double tableau[2][6] = {{12.56,7.26,23.48,15.58,16.3,14.72},
				{0,0,0,0,6,4}};
 	
somme = 0;
	for (i = 0; i < nombre; i ++ && j = 0; j< nombre, j ++)
	somme = somme + tableau[i][j];

	fprintf(stdout,"la somme = %d", somme);

return 0;
}

