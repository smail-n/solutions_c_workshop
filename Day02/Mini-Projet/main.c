#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "myFonction.h"





// --   --   ----  --------------------------------------------------------------------------------------------------------------
int main() {
		//1 for sell 
	
	printf ("do you want to add a Book\n[y/n] : ");
	scanf (" %c", &DoYou);
	
	if (DoYou == 'Y' || DoYou == 'y')
		Ajouter_un_livre_au_stock ();
	else
		exit (0);		


	//  					AFICH ALL BOOKS  ?
	printf ("there is a Book you want it or\nyou want to see all the Book we have than you chose\n[you know (1)/Afich all Book (2)]");
	scanf ("%d", &Chose);
	
	if (Chose == 2){
		
		DoYou = '\0';
		Afficher_tous_les_livres_disponibles();	
		printf ("\ndo you want any Book From our Librairie\n[Y/N] : ");
		scanf (" %c", &DoYou);
		
		if (DoYou == 'Y' || DoYou == 'y'){
			
			printf ("Nambre the Book That you want ...\n");
			for (i = 0; i < NombreTotalBook; i++) printf ("%d or ",i+1); printf ("\n: ");
			scanf ("%d", &NombreBookRochersh);
			what = 1;
			printf ("hwo many Book you want to sell : ");
			scanf ("%d", &BookSell);
			if (Stock [NombreBookRochersh-1] < BookSell ){
				BookSell =  Stock [NombreBookRochersh-1];
				printf ("\nwe jaste have %d\n", BookSell);
			}
			Mettre_a_jour_la_quantite_un_livre();	
		}
	}
	else {
		printf ("\nwhat Book's name : ");
		scanf (" %[^\n]", NameBookRochersh);
		
		what = Rechercher_un_livre_par_son_titre ();
		if (what == 1){
			printf ("hwo many Book you want to sell : ");
			scanf ("%d", &BookSell);
			if (Stock [NombreBookRochersh-1] < BookSell ){
				BookSell =  Stock [NombreBookRochersh-1];
				printf ("\nwe jaste have %d\n", BookSell);
			}
			Mettre_a_jour_la_quantite_un_livre();
		}
		else
			printf ("\nwe have no this Book %s ", NameBookRochersh);
	}
return 0;
}
