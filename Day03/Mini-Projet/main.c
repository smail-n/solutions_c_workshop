#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "librirai.h"


int main(){
    int i = 0, j;
    int how;
    char name [50];
    Node *Finde;

    printf ("we have a notebook for writ you Contacts\n");
    //printf ("");
    printf ("chose a number from 1 -> 5\n\n");
    do{
        printf ("\n1. Ajouter un Contact\n");
        printf ("2.  Modifier un Contact\n");
        printf ("3. Supprimer un Contact\n");
        printf ("4. Afficher Tous les Contacts\n");
        printf ("5. Rechercher un Contact\nenter : ");
        scanf ("%d", &i);

        switch (i){
            case 1:
                printf ("How many contact do you want add : ");
                scanf ("%d", &how);
                getchar ();
                for (j = 0; j < how; j++)
                    Ajouter_un_Contact ();
                break;
            case 2:
                Modifier_un_Contact ();
                break;
            case 3:
                Supprimer_un_Contact ();
                break;
            case 4:
                Afficher_Tous_les_Contacts ();
                break;
            case 5:
                printf ("enter a name for search about it : ");
                getchar ();
                fgets (name, 50, stdin);
                name [strcspn (name, "\n")] = '\0';
                Finde = Rechercher_un_Contact (name);
                break;
            default:
                printf ("just chose from 1 -> 5\n");
                break;
        }
        printf ("do you want chose agine \nno 0 or any number yes : ");
        scanf ("%d", &i);
        getchar ();
    }while (i);


    return 0;
}
