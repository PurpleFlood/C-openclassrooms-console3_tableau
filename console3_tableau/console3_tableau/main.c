//
//  main.c
//  console3_tableau
//
//  Created by asap on 19/03/2024.
//

#include <stdio.h>
void AfficherTableau(int tableau[], int TailleTableau);
int sommeTableau(int tableau[], int TailleTableau);
double moyenneTableau(int tableau[], int TailleTableau);
int main(int argc, const char * argv[]) {
    
    // Déclaration du tableau (on indique la longueur du tableau)
    int taille=4;
    int tableau[taille];
    
    // Affectation des valeurs
    tableau[0]= 10;
    tableau[1]= 11;
    tableau[2]= 12;
    tableau[3]= 13;
    
    // Le tableau fonctionne comme un pointeur, on peut afficher l'adresse du tableau
    printf("%d\n", *tableau);
    
    // On peut afficher la première valeur du tableau
    printf("%d\n", *tableau);
    
    // Puis la seconde…
    printf("%d\n", *(tableau+1));
    
    // Donc avec un boucle for, on peut afficher toutes les valeurs du tableau
    for (int i=0; i<taille;i++){
        printf("Valeur:%d\n", *(tableau+i));
    }
    
    AfficherTableau(tableau, taille);
    printf("Somme:");
    sommeTableau(tableau, taille);

    printf("Moyenne:");
    moyenneTableau(tableau, taille);
    return 0;
}
// On peut afficher le tableau avec une fonction et un pointeur
void afficherTableau(int tableau[], int TailleTableau){
    int i;
    for (i=0; i < TailleTableau; i++){
        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int TailleTableau){
    int somme=0;
    for(int i=0; i<TailleTableau; i++){
        somme+=tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int TailleTableau){
    int somme=0;
    for(int i=0; i<TailleTableau; i++){
        somme+=tableau[i];
    }
    return (double)somme/(double)TailleTableau;
}
