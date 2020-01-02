#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define WORD_SIZE_MAX 30

#define CRITERE_PRIX 1
#define CRITERE_LABEL 2

typedef struct Produit
{
    char marque[32];
    double prix;
    int label;
} Produit;

/**
 * Ouvre le fichier mis en paramètre "nomFichier" et ajoute les bons champs à
 * la liste de Produit vide mise en paramètre.
 */
int parse_csv_product(char *nomFichier, Produit *listeProduits)
{
    FILE *fichier = NULL;

    fichier = fopen(nomFichier, "r");

    if (fichier == NULL)
    {
        printf("Fichier CSV non trouvé (%s)\n", nomFichier);
        return EXIT_FAILURE;
    }

    printf("Lecture de %s", nomFichier);

    char *mot;
    char ligne[WORD_SIZE_MAX];

    // On retire la première ligne parce que c'est juste le nom des champs
    fgets(ligne, sizeof(ligne), fichier);

    int i = 0;

    while (fgets(ligne, sizeof(ligne), fichier) != NULL && !feof(fichier))
    {
        // On stocke dans chaque champ du tableau prod la valeur correspondante
        char *token = strtok(ligne, ",");

        strcpy(listeProduits[i].marque, token);
        token = strtok(NULL, ",");

        listeProduits[i].prix = strtod(token, NULL);

        token = strtok(NULL, ",");
        listeProduits[i].label = strtol(token, NULL, 10);
        i++;
    }

    return i;
}

void print_produit(Produit produit)
{
    printf("%s\t%0.2f€\t%d\n", produit.marque, produit.prix, produit.label);
}

void print_liste_produits(Produit *produits, int nbProduits)
{
    for (int i = 0; i < nbProduits; i++)
    {
        print_produit(produits[i]);
    }
}

/**
 * Retourne l'indice du produit de valeur maximale
 * (utilisée pour le calcul de note)
 */
int max_prix_produit(Produit *produits, int nbProduits)
{
    double max = 0;
    int indiceMax = 0;
    for (int i = 0; i < nbProduits; i++)
    {
        if (produits[i].prix > max)
        {
            max = produits[i].prix;
            indiceMax = i;
        }
    }

    return indiceMax;
}

/**
 * Calcule la note pour chaque produit en fonction d'une liste de produits
 * Le résultat de la fonction est mise dans le tableau notes_sortie en paramètre de fonction
 * Le critère est soit CRITERE_PRIX soit CRITERE_LABEL (0 ou 1 en fait)
 */
void calculer_note_produits(Produit *produits, int nbProduits, int critere, double *notes_sortie)
{
    int indicePrixMax = max_prix_produit(produits, nbProduits);
    double prixMax = produits[indicePrixMax].prix;

    for (int i = 0; i < nbProduits; i++)
    {
        if (critere == CRITERE_PRIX)
        {
            notes_sortie[i] = (prixMax - produits[i].prix) * 2 + produits[i].label;
        }
        else if (critere == CRITERE_LABEL)
        {
            notes_sortie[i] = prixMax - produits[i].prix + produits[i].label * 2;
        }
        else
        {
            // C'est un cas qui ne devrait pas survenir normalement mais bon
            notes_sortie[i] = prixMax - produits[i].prix + produits[i].label;
        }
    }
}