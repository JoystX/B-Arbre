#include"fonctions.h"

int main(int argc, char *argv[]){
	printf("Bienvenu sur B-Arbre\n\n\n\n");
	int continuer = 1;

B_Arbre arbreActuel = Creer_B_Arbre();

	while(continuer == 1){
		int choix;
	    printf("Quel est votre choix ?:\n\n");

	    printf("1- Ajouter une clé à un B-Arbre\n");
	    printf("2- Supprimer une clé\n");
	    printf("3- Afficher le contenu d'un B-Arbre\n");
	    printf("4- Tester si une clé appartient à un B-Arbre\n");
	    printf("5- Vider le B-Arbre\n");
	    printf("6- Sauvegarder les cles d'un B-Arbre dans fichier\n");
	    printf("7- Construire un B-Arbre à partir d'un fichier\n");
	    printf("8- Quitter\n");

	    scanf("%d",&choix);

	    switch (choix){
	        case 1:
					printf("\nQuel clé ajouter ?\n");
				scanf("%d",clé);
				 arbreActuel=Ajouter_Cle(B_Arbre B, int C)
				printf("\n\n");
	        break;

	        case 2:
	        break;

	        case 3:
					afficher_arbre(arbreActuel,)
	        break;

	        case 4:
	        break;

	        case 5:
	        break;

	        case 6:
	        break;

	        case 7:
	        break;

	        case 8: printf("Au revoir \n");
	        	continuer = 0;
	        break;

	        default : printf("\n\n\nVeuillez entrer un choix valide\n");
	            break;

	    }



	}

	return 0;
}
