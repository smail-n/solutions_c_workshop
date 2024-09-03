#include <stdio.h>
#include <stdlib.h>

long Factorielle (int a){
	if (a == 1)
		return 1;
	else
		return a * Factorielle (a-1);
}

int main() {
	int f;
	
	
	do {
		printf ("enter la nombre positive : ");
		scanf ("%d", &f);
	}while(f < 0);
	
	if (f == 0 || f == 1)
		printf ("Factorielle de %d est 1", f);
	else
		printf ("Factorielle de %d est %ld ", f, Factorielle (f));

	return 0;
	
}

