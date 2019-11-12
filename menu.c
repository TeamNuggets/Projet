#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int choixMenu;
  
  printf("=== Menu ===\n\n");
  printf("1. Produits alimentaires\n");
  printf("2. Boissons\n");
  printf("3. Hygiène et Beauté\n");
  printf("4. Textile et chausssures\n");
  printf("\nVotre choix ? ");
  scanf("%d", &choixMenu);
  
  printf("\n");
  
  switch (choixMenu)
  {
    case 1:
       printf("Alimentaire");
	int i = 0;
	printf("Quel ? taper 1, 2 ou 3\n");
        scanf("%d", &i);
       switch(i){
        case 1:
           printf("Epicerie salée\n");
	    int i = 0;
	    printf("Quel produit? taper 1, 2 ou 3\n");
       	    scanf("%d", &i);
       	   switch(i){
            case 1:
            	printf("Epicerie salée\n");
            	break;
            case 2:
            	printf("Epicerie sucrée\n");
		 int i = 0;
	         printf("Quel produit ? taper 1, 2 ou 3\n");
       	         scanf("%d", &i);
       	        switch(i){
            	    case 1:
            		printf("Pate à tartiner\n");
			    }
            		break;
	    }
	    break;
        case 2:
            printf("Epicerie sucrée\n");
            break;
        case 3:
            printf("Produits frais\n");
            break;
        case 4:
            printf("fruits et légumes\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct.\n");
	}
       break;

    case 2:
       printf("Boissons");
       break;
    case 3:
       printf("Hygiène et Beauté");
       break;
    case 4:
       printf("Textiles et chaussures");
       break;
    default:
       printf("Veuillez entrer un nombre correct");
       break;
  }
  
  printf("\n\n");
  
  return 0;
}


/*
int int main(int argc, char *argv[])
{
  int choix;

  printf("Quelle grande surface? taper 1, 2 ou 3 \n\n");
  scanf("%d", &choix);

  printf("\n");
  switch (choix)
  {
    case 1:
       printf("Vous avez choisi alimentaire \n\n");
       int i = 0;
        printf("Quel ? taper 1, 2 ou 3\n\n");
        scanf("%d", &i);
       switch(i){
        case 1:
            printf("choix 1 du sous menu 1\n\n");
            break;
        case 2:
            printf("choix 2 du sous menu 1\n\n");
            break;
        case 3:
            printf("choix 3 du sous menu 1 \n\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct.\n\n");
            break;
       }
       break;
    case 2:
        printf("Vous avez choisi le deuxieme choix\n\n");
        printf("Quel est votre choix?taper 1, 2 ou 3\n\n");
        scanf("%d", &i);
       switch(i){
        case 1:
            printf("choix 1 du sous menu 2\n\n");
            break;
        case 2:
            printf("choix 2 du sous menu 2\n\n");
            break;
        case 3:
            printf("choix 3 du sous menu 2 \n\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct.\n\n");
            break;
       }
       break;
    case 3:
        printf("Vous avez choisi le troisieme choix\n\n");
        printf("Quel est votre choix?taper 1, 2 ou 3\n\n");
        scanf("%d", &i);
        switch(i){
        case 1:
            printf("choix 1 du sous menu 3\n\n");
            break;
        case 2:
            printf("choix 2 du sous menu 3\n\n");
            break;
        case 3:
            printf("choix 3 du sous menu 3 \n\n");
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct.\n\n");
            break;
        }
    break;
    default:
       printf("Vous n'avez pas rentre un nombre correct.\n\n");
       break;

}
  printf("\n\n");

  return 0;
}
*/
