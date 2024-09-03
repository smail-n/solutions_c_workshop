#include <stdio.h>
#include <stdlib.h>


int minimo (int a, int b){
	if (a > b)
		return b;
	else 
		return a;
}


int main() {
	int nombre1, nombre2;
	
	printf ("saiser nombra A = ");
	scanf ("%d", &nombre1);
	
	printf ("saiser nombra B = ");
	scanf ("%d", &nombre2);
	
	printf ("min est %d", minimo (nombre1, nombre2));

	return 0;	
}

