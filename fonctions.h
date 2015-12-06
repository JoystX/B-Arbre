#include<stdio.h>
#include<stdlib.h>
#define DEGRE 2

typedef enum { Faux, Vrai } Booleen ;
typedef struct noeud{
	int Cle[2*DEGRE+1];
	int Nbcle;
	struct noeud *Fils[2*DEGRE+1];
}*B_Arbre;

B_Arbre Creer_B_Arbre();
B_Arbre Ajouter_Cle(B_Arbre B, int C);
B_Arbre Supprimer_Cle(B_Arbre B, int C);
Booleen Appartient_Cle(B_Arbre B, int C);
Booleen B_Arbre_Vide(B_Arbre B);
void afficher_arbre(B_arbre B, int hauteur);
