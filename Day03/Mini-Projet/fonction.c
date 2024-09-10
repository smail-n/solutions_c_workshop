#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "librirai.h"

Node *first ;
Node *selsct ;
int NombreTotalContact = 0;




void Ajouter_un_Contact (){
    Node *NewNode = (Node*) malloc (sizeof (Node));

    if (NombreTotalContact == 0){
        first = NewNode;
        first->past = NULL;
        first->next = NULL;

        selsct = NewNode;
        selsct->past = NULL;
        selsct->next = NULL;
    }
    else{
        selsct->next = NewNode;
        NewNode->past = selsct;
        selsct = NewNode;
        selsct->next = NULL;
    }


    printf ("enter Full name : ");
    fgets (selsct->FullName, 50, stdin);
    selsct->FullName [strcspn (selsct->FullName, "\n")] = '\0';

    printf ("enter email : ");
    fgets (selsct->email, 50, stdin);
    selsct->email [strcspn (selsct->email, "\n")] = '\0';

    printf ("enter nombre phone : ");
    fgets (selsct->nombrTele, 50, stdin);
    selsct->nombrTele [strcspn (selsct->nombrTele, "\n")] = '\0';

    NombreTotalContact++;
}

Node *Rechercher_un_Contact (char Name [50]){
    int i;
    Node *Finde;
    Finde = first;

    for (i = 0; i < NombreTotalContact; i++){
        if (strcasecmp(Finde->FullName, Name) == 0){
            printf ("\nwe fined The contact\n");
            printf ("number The contact : %d\n",i+1);
            printf ("Full name : %s\n", Finde->FullName);
            printf ("e-mail : %s\n", Finde->email);
            printf ("number phone : %s\n", Finde->nombrTele);
            return Finde;
            break;
        }
        Finde = Finde->next;
    }
    printf ("\nwe cannot Fined The contact that name %s\n", Name);
    return NULL;
}

void Modifier_un_Contact (){
    int chose;
    char name[50];
    Node *Finde;

    printf ("\t\t\%dtwhat's Full name : ",NombreTotalContact);
    getchar ();
    fgets (name, 50, stdin);
    name [strcspn (name, "\n")] = '\0';


    Finde = Rechercher_un_Contact (name);
    if (Finde != NULL){
        printf ("what do you want to chenge\n");
        do{
            printf ("\n1. Full name\n");
            printf ("2. Adresse e-mail\n");
            printf ("3. Nombre phone\n");
            printf ("4. All information\nenter : ");
            scanf ("%d", &chose);
            getchar ();

            switch (chose){
                case 1:
                case 4:
                    printf ("enter New Full Name for change the past name : ");
                    fgets (Finde->FullName, 50, stdin);
                    Finde->FullName [strcspn (Finde->FullName, "\n")] = '\0';
                    if (chose == 4) goto all;
                    break;
                case 2:
                    all :
                    printf ("enter your email : ");
                    fgets (Finde->email, 50, stdin);
                    Finde->email [strcspn (Finde->email, "\n")] = '\0';

                    if (chose == 4) goto all1;
                    break;
                case 3:
                    all1:
                    printf ("enter your nombre phone : ");
                    fgets (Finde->nombrTele, 50, stdin);
                    Finde->nombrTele [strcspn (Finde->nombrTele, "\n")] = '\0';
                    break;
                default :
                    printf ("you need to chose between 1 -> 4\n");
                    break;
            }
        }while (chose >4 || chose < 1);
   }
}


void Supprimer_un_Contact (){
    int i = 0;
    Node *Finde;
    char name[50];

    do{
        printf ("\t\t\twhat's Full name : ");
        getchar ();
        fgets (name, 50, stdin);
        name [strcspn (name, "\n")] = '\0';

        Finde = Rechercher_un_Contact (name);
        if (Finde != NULL){
            if (Finde->next != NULL)
                Finde->next->past = Finde->past;
            if (Finde->past != NULL)
                Finde->past->next = Finde->next;
            else
                first = first->next;

            Finde->next = NULL;
            Finde->past = NULL;

            NombreTotalContact--;
            free (Finde);
            printf ("delete good!\n");
        }

        printf ("do you want to search for anther one then Delete it\nenter any number if you want else enter 0\nenter : ");
        scanf ("%d", &i);
    }while (i);
}

void Afficher_Tous_les_Contacts (){
    int i = 0;
    Node *Finde;
    Finde = first;

    for (i = 0; i < NombreTotalContact; i++){
        printf ("\n--------Contact %d---------\n",i);
        printf ("Full name : %s\n", Finde->FullName);
        printf ("e-mail : %s\n", Finde->email);
        printf ("Nombre : %s\n", Finde->nombrTele);

        Finde = Finde->next;
    }
}


