#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "utils.h"
#include "menu.h"

#define NB_PRODUITS_MAX 64

int main()
{
    Produit produits[NB_PRODUITS_MAX];
    double notes[NB_PRODUITS_MAX];

    ChoixMenu choix = menu();
    if (choix.fichier == NULL)
    {
        printf("ERREUR : Ce cas n'a pas encore été géré.\n");
        return EXIT_FAILURE;
    }

    int nbProduits = parse_csv_product(choix.fichier, produits);

    calculer_note_produits(produits, nbProduits, choix.critere, notes);

    printf("Voici la liste des meilleurs produits selon vos critères :\n");

    for (int i = 0; i < nbProduits; i++)
    {
        printf("- %s\t%0.2f€\t[Score = %0.2f]\n", produits[i].marque, produits[i].prix, notes[i]);
    }

    return 0;
}
