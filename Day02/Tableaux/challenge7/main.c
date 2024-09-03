#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int tab [50];
	int i, n, ordre;
	
	do{
		printf ("enter nombre des elements du tableau entre 0 et 50 : ");
		scanf ("%d", &n);
	} while(n > 50 || n < 0);
	
	
	for (i = 0; i < n; i++){
		printf ("tab [%d] = ", i+1);
		scanf ("%d", &tab [i]);
	}
	
	for (ordre = 0; ordre < n-1; ordre++){
		for (i = ordre+1; i < n; i++){
			if (tab [ordre] > tab [i]){
				
				tab [ordre] += tab [i];
				tab [i] = tab [ordre] - tab [i];
				tab [ordre] -= tab [i];
			}
		}
	}
	
	printf ("------------------tableau -------------------------\n");
	for (i = 0; i < n; i++)
		printf ("tab [%d] = %d\n", i+1, tab [i]);
	

	return 0;
}
