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
  printf("\nVotre choix ? \n\n");
  scanf("%d", &choixMenu);
  

   switch (choixMenu)
    {
	int i;
	case 1:
 	printf("=== PRODUITS ALIMENTAIRES ===\n\n");
	printf("1. Epicerie salée\n");
	printf("2. Epicerie sucrée \n");
	printf("3. produits frais\n");
	printf("\nVotre choix ? \n\n");
	scanf("%d", &i);

       	switch (i)
 		{
		int i;
        case 2:
        printf("=== EPICERIE SUCREE ===\n\n");
		printf("1. Café, thé, infusion \n");
		printf("2. céréales \n");
		printf("3. Confiture, miel , pate à tartiner\n");
		printf("\nVotre choix ? \n\n");
		scanf("%d", &i);
		
		case 1:
		{
 		printf("=== EPICERIE SALEE ===\n\n");
		printf("pas de solution\n\n");
		}
		break;
		case 3:
		{
 		printf("=== PRODUITS FRAIS ===\n\n");
		printf("pas de solution\n\n");
		}
		break;

		
		switch (i)
		{
		int i; 
		 case 3:
		    printf("=== CONFITURE,MIEL,PATE A TARTINER === \n\n");
			printf("1. Confiture\n");
			printf("2. Miel\n");
			printf("3. Pate à tartiner\n");
			printf("\nVotre choix ? \n\n");
			scanf("%d", &i);
		case 1:
		{
 		printf("=== CAFE,THE,INFUSION ===\n\n");
		printf("pas de solution\n\n");
		}
		break;
		case 2:
		{
 		printf("=== CEREALES ===\n\n");
		printf("pas de solution\n\n");
		}
		break;
                        
			switch (i)
		       {
		 	int i;
		        case 3:
			   printf("=== CRITERE POUR LES PATES A TARTINER === \n\n");
			   printf("1.prix \n");
			   printf("2.label \n");
			   printf("\nVotre choix ? \n\n");
			   scanf("%d", &i);
           
				case 2:
				{
 				printf("=== CRITERES POUR LE MIEL ===\n\n");
				printf("pas de solution\n\n");
				}
				break;
				case 1:
				{
 				printf("=== CRITERES POUR LA CONFITURE ===\n\n");
				printf("pas de solution\n\n");
				}
				break;         
			}
			break;
		}
		break;		
	}
	break;

		case 2:
		{
 		printf("=== BOISSONS ===\n\n");
		printf("pas de solution\n\n");
		}
		break;
		case 3:
		{
 		printf("=== HYGIENE ET BEAUTE ===\n\n");
		printf("pas de solution\n\n");
		}
		break;
		case 4:
		{
 		printf("=== TEXTIL ET CHAUSSURES ===\n\n");
		printf("pas de solution\n\n");
		}
		break;


default:
printf("Vous n'avez pas rentré un nombre correct.\n\n");
break;
  }
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
