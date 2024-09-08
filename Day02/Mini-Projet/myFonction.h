#include <stdbool.h>

#ifndef MYFONCTION_H
#define MYFONCTION_H



	extern float mach [100];
	extern char NameBook[100][50], NameAuteur[100][20];
	extern char DoYou, NameBookRochersh [50];
	extern int Stock [100];
	extern int Chose, NombreTotalBook , i;
	extern int NombreBookRochersh;
	extern int BookSell;
	extern bool what;	





void Ajouter_un_livre_au_stock();
void Afficher_tous_les_livres_disponibles();
void Supprimer_un_livre_du_stock();
void Mettre_a_jour_la_quantite_un_livre();
bool Rechercher_un_livre_par_son_titre ();



#endif 
