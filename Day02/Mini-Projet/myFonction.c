#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "myFonction.h"

	float mach [100];
	char NameBook[100][50], NameAuteur[100][20];
	char DoYou, NameBookRochersh [50];
	int Stock [100];
	int Chose, NombreTotalBook , i;
	int NombreBookRochersh;
	int BookSell;
	bool what;	


void Ajouter_un_livre_au_stock(){
	printf ("Titre du livre : ");
	getchar();
	fgets (NameBook[NombreTotalBook], 50, stdin);
	NameBook [NombreTotalBook][strcspn (NameBook [NombreTotalBook], "\n")] = '\0';
	printf ("Auteur du livre : ");
	fgets (NameAuteur[NombreTotalBook], 20, stdin);
	NameBook [NombreTotalBook][strcspn (NameAuteur [NombreTotalBook], "\n")] = '\0';
	printf ("Prix du livre : ");
	scanf ("%f", &mach [NombreTotalBook]);
	printf ("hwo many Book you want add to stock : ");
	scanf ("%d", &Stock [NombreTotalBook]);
	NombreTotalBook++;
}





void Afficher_tous_les_livres_disponibles(){
	
	for (i = 0; i < NombreTotalBook; i++){
		printf ("--------------------------------------------\n");
		printf ("Book nambr %i is  %s\n", i+1, NameBook[i]);	
		printf ("Auteur : %s\n", NameAuteur+i);
		printf ("Prix : %.2f\n", mach[i]);
		printf ("stock : %i\n", Stock [i]);	
	}
}






void Supprimer_un_livre_du_stock(){
	

	
	if (Stock [NombreBookRochersh-1] <= 0){
		NombreTotalBook--;
		for (i = NombreBookRochersh-1; i <  NombreTotalBook; i++){
			strcpy (NameBook [i], NameBook [i+1]);
			Stock [i] = Stock [i+1];
			mach [i] = mach [i+1];
		}
	}
	else 
	return ;
}







void Mettre_a_jour_la_quantite_un_livre(){
	
	if (what == true){
		for (i = 0; i < BookSell; i++)
			(Stock [NombreBookRochersh-1])--;
		    Supprimer_un_livre_du_stock ();
		
	}
	else
		for (i = 0; i < BookSell; i++)
			(Stock [NombreBookRochersh-1])++;
		    Supprimer_un_livre_du_stock ();
			
}






bool  Rechercher_un_livre_par_son_titre (){
	
	for (i = 0; i < NombreTotalBook; i++)
		if (strcasecmp (NameBookRochersh, NameBook[i]) == 0){
			NombreBookRochersh = i;
			return 1;
		}
	return 0;
}










