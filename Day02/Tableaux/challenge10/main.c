#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int tab [50];
	int i, n, cherche;
	
	do{
		printf ("enter nombre des elements du tableau entre 0 et 50 : ");
		scanf ("%d", &n);
	} while(n > 50 || n < 0);
	
	for (i = 0; i < n; i++){
		printf ("tab [%d] = ", i+1);
		scanf ("%d", &tab [i]);
	}
	
	printf ("enter nombre pour cherch : ");
	scanf ("%d", &cherche);
	
	for (i = 0; i < n; i++){
		if (cherche == tab [i]){
			printf ("il est existe ");
			break;
		}
		if (i == n-1)
			printf ("il n'est pas existe ");
	}
		
		
	return 0;
}
