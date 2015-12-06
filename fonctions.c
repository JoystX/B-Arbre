#include"fonctions.h"


B_Arbre Creer_B_Arbre(){
	int i;
	 B_Arbre B = malloc(sizeof(struct noeud));
	 B->Nbcle = 0;
	 for(i=0 ; i<2*DEGREE+1 ; i++) {
			 B->Fils[i] = NULL;
	 }
	 B->filsTemp = NULL;
	 return B;

}



B_Arbre Ajouter_Cle(B_Arbre B, int C){

	// Si l'arbre est vide, on ajoute une clé
	    if(B_Arbre_Vide(B)) {
	        B = Creer_B_Arbre();
	        B->Cle[B->Nbcle ++] = C;
	    }
	    // Si le fils de l'arbre est vide
	    else if(B_Arbre_Vide(B->Fils[0])){
	        int pos;
	        for(pos=0 ; (pos < B->Nbcle) && (C > B->Cle[pos]) ; pos++) {
	        }
	        int i;
	        // On décale les valeurs pour ajouter la nouvelle à la bonne place
	        for(i=B->Nbcle ; i>pos ; i--) {
	            B->Cle[i] = B->Cle[i-1];
	        }
	        B->B[pos] = C;
	        B->Nbcle ++;
	    }
	    // Sinon
	    else {
	        int pos;
	        // On ajoute la valuer sur son fils gauche
	        for(pos=0 ; (pos < B->Nbcle) && (key > B->Cle[pos]) ; pos++) {
	        }
	        B->Fils[pos] = Ajouter_Cle(B->Fils[pos], C);

	        // Si le fils sur lequel on ajoute est remplis, on coupe
	        if(B->Fils[pos]->Nbcle == 2*DEGREE+1) {
	            B_Arbre arbreTemp = casse_noeud(B->Fils[pos]);
	            int i;
	            // On décale toutes les valeurs et on ajoute la racine au bon endroit
	            for(i=B->Nbcle ; i>pos ; i--) {
	                B->Cle[i] = B->Cle[i-1];
	            }
	            B->Cle[pos] = arbreTemp->Cle[0];
	            B->Nbcle++;
	            if(B->Nbcle == 2*DEGREE+1) {
	                B->filsTemp = B->Fils[4];
	            }
	            for(i=B->Nbcle-1 ; i>pos ; i--) {
	                B->Fils[i] = B->Fils[i-1];
	            }
	            B->Fils[pos] = arbreTemp->Fils[0];
	            B->Fils[pos+1] = arbreTemp->Fils[1];
	        }

	        if(! B_Arbre_Vide(B->filsTemp)) {
	            B_Arbre arbreTemp = casse_noeud(B);
	            arbreTemp->Fils[1]->Fils[DEGREE] = B->filsTemp;

	            B = arbreTemp;

	            free(B->filsTemp);
	            B->filsTemp = NULL;
	        }
	    }

	    return B;

	return B;
}
B_Arbre Supprimer_Cle(B_Arbre B, int C){
	return B;
}
Booleen Appartient_Cle(B_Arbre B, int C){
	return Faux;
}
Booleen B_Arbre_Vide(B_Arbre B){
	return (B == NULL);
}

void afficher_arbre (B_arbre B, int hauteur){
	if(! B_Arbre_Vide(B)) {
        int i;
        printf("%d \\ ", hauteur);
        for(i=0 ; i<B->Nbcle ; i++) {
            printf("%d - ", B->Cle[i]);
        }
        printf("\n");
        for(i=0 ; i<DEGREE*2+1 ; i++) {
            afficher_arbre(B->Fils[i], hauteur+1);
        }
    }
}
