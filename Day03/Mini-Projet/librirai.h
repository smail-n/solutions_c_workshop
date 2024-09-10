#ifndef LIBRIRAI_H
#define LIBRIRAI_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



typedef struct node {
    char FullName [50];
    char nombrTele [50];
    char email [50];
    struct node *next;
    struct node *past;

}Node;

extern Node *first ;
extern Node *selsct ;
extern int NombreTotalContact;



void Ajouter_un_Contact ();
Node * Rechercher_un_Contact (char Name [50]);
void Modifier_un_Contact ();
void Supprimer_un_Contact ();
void Afficher_Tous_les_Contacts ();

#endif
