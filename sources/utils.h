#include "utils.c"

int parse_csv_product(char *nomFichier, Produit *listeProduits);
void print_produit(Produit produit);
void print_liste_produits(Produit *produits, int nbProduits);
void classer_produits(Produit *listeProduits, int nbProduits);
int max_prix_produit(Produit *produits, int nbProduits);
void calculer_note_produits(Produit *produits, int nbProduits, int critere, double *notes_sortie);