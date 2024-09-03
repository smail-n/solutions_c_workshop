#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int tab [50], invi [50];
	int i, n;
	
	do{
		printf ("enter nombre des elements du tableau entre 0 et 50 : ");
		scanf ("%d", &n);
	} while(n > 50 || n < 0);
	
	for (i = 0; i < n; i++){
		printf ("tab [%d] = ", i+1);
		scanf ("%d", &tab [i]);
		
		invi [n-(i+1)] = tab [i];
	}
	
	printf ("------------------tableau et tableau invi -------------------------\n");
	for (i = 0; i < n; i++)
		printf ("tab [%d] = %d\tinvi [%d] = %d\n", i+1, tab [i], i+1, invi [i]);
	return 0;
}
