#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ajouter_un_Livre_au_Stock (char NameBook [][20], char Auteur [][20], float Prix [], int Quantite [], int *NombrBook){
	
	char answer;
	
	printf ("Hi! you want to add new book to our Librairie?\n[Y/N] : ");
	scanf (" %c", &answer);
	
	again:
	if (answer == 'Y' || answer == 'y'){
		if ((*NombrBook) >= 10) {
			printf("cannot add new book to stock, it's full");
			return;
		}
		(*NombrBook)++;
		printf ("%d ", *NombrBook);
		getchar();
		printf ("Ok!\nTell us what's its name? ");
		fgets (NameBook[*NombrBook-1], 20, stdin);
		NameBook[*NombrBook-1][strcspn (NameBook [*NombrBook-1], "\n")] = '\0';
	//	return;
			printf ("add %s to Stock\n...", NameBook [*NombrBook - 1]);
	}
	else {
		answer = '\0';
		printf ("you didn't wanna to add eny Book\nare you sure [Y/N] : ");
		scanf (" %c", &answer);
		if (answer == 'Y' || answer == 'y')
			return ;
		else
			goto again;
	}
	
	printf ("Tell us what's Auteur name? ");
	fgets (Auteur[*NombrBook-1], sizeof (Auteur[*NombrBook-1]), stdin);
	Auteur[*NombrBook-1][strcspn (Auteur[*NombrBook-1], "\n")] = '\0';
	printf ("add %s to book\n...", Auteur[*NombrBook-1]);//
	
	printf ("how mach the book ");
	scanf ("%f", &Prix [*NombrBook-1]);
	
	printf ("how a lot of the book, we will adding in Librairie");
	scanf ("%d", &Quantite[*NombrBook-1]);
}


void Afficher_Tous_les_Livres_Disponibles (char NameBook [][20], char Auteur [][20], float Prix [], int Quantite [], int NombrBook){
	int i;
	
	for (i = 0; i < NombrBook; i++){
		printf ("\t\t\tBook%i in our librairie\n", i+1);
		printf ("its name is %s\nname the author is %s\nits price is %.2f\nwe have %d of this Book", NameBook [i], Auteur [i], Prix [i],  Quantite [i]);
	}
}

void Mettre_a_Jour_la_Quantite_Livre (int mettre, int PlaceChange[], int i){
	
	int buySell;
	
	if (mettre == 1){
		printf ("how many books did you buy? ");
		scanf ("%d", &buySell);
		
		PlaceChange [i] += buySell;
	}
	else{
		printf ("how many books did you sell? ");
		scanf ("%d", &buySell);
		
		PlaceChange [i] -= buySell;
	}
}

void Supprimer_un_Livre_du_Stock (){
}
int main() {
	char NameBook [10][20];
	char Auteur [10][20];
	float Prix [10];
	int Quantite [10];
	int NombrBook  = 0;
	
	int mettre;
	char sersh [20];
	int i, j;
	
	
	Ajouter_un_Livre_au_Stock (NameBook, Auteur, Prix, Quantite, &NombrBook);
	Afficher_Tous_les_Livres_Disponibles (NameBook, Auteur, Prix, Quantite, NombrBook);
	
	do {
		printf ("did you sell more book (1) or there is a new Quantite(2) : ");
		scanf ("%d", &mettre);
	}while(mettre != 1 && mettre != 2);
	printf ("what is name the book do you wanna to chenge its quantite ");
	fgets (sersh, sizeof (sersh), stdin);
	sersh [strcspn (sersh, "\n")] = '\0';
	
	for (i = 0; i < NombrBook; i++)
		if (strcasecmp (NameBook [i], sersh) == 0)
			break;
	
	Mettre_a_Jour_la_Quantite_Livre (mettre, Quantite, i); 
	for (j = 0; j < i;i++)
		sersh[j] = NULL;
	printf ("what is the book's name  do you wanna to delet ");
	fgets (sersh, sizeof (sersh), stdin);
	sersh [strcspn (sersh, "\n")] = '\0';
	
	for (i = 0; i < NombrBook; i++)
		if (strcasecmp (NameBook [i], sersh) == 0)
			break;
			
	Supprimer_un_Livre_du_Stock (NameBook, Auteur, Prix, Quantite, &NombrBook, i);
	
	return 0;
}
