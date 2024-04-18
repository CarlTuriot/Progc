#include <stdio.h>
#include <stdlib.h>
#include "listemots.h"

struct sMot {
char * mot; // le mot (chaîne de caractères allouée dynamiquement )
int taille; // nombre de caractères du mot
int occurrences; // nombre d’occurrences du mot dans un texte
struct sMot * suivant; // mot suivant dans le contexte d’une liste chaînée
};


struct sListeMots {
struct sMot * debut ; // pointeur vers le premier mot de la liste
struct sMot * fin ; // pointeur vers le dernier mot de la liste
int nbMots ; // nombre de mots de la liste
};

struct sMot *motCreer(char *mot, int occ)
{
    int n=0;
    while(mot[n]!='\0'){
        n++;
    }
    mot=malloc(n*sizeof(char));
    struct sMot *pMot;
        pMot->mot=*mot;
        pMot->taille=n;
        pMot->occurrences=occ;
        pMot->suivant=NULL;
    pMot=malloc(sizeof(struct sMot));
    if(pMot==NULL)return NULL;
    return pMot;
}

void motLiberer(struct sMot *mot) //error
{
    free(*mot.mot);
    free(mot);
}

tListeMots creerListeMots(void)
{
    struct sListeMots *newList;
        newList->debut=NULL;
        newList->fin=NULL;
        newList->nbMots=0;
    if(newList==NULL)return NULL;
    return newList;
}

void detruireListeMots(tListeMots liste) //unfinished
{

}

int nombreDeMots(tListeMots liste)
{
    return liste->nbMots;
}

void ajouterMotAvecOcc(tListeMots liste, char *mot, int nbOcc)
{
    liste->fin->suivant=motCreer(*mot,nbOcc);
    liste->fin=liste->fin->suivant;
}

void ajouterMot(tListeMots liste, char *mot)
{
    liste->fin->suivant=motCreer(*mot,1);
    liste->fin=liste->fin->suivant;
}

void ecrireListeMots(tListeMots liste, FILE *fich) //unfinished
{

}