#include <stdio.h>
#include <stdlib.h>

int maximum (int a, int b){
	if (a > b)
		return a;
	else 
		return b;
}


int main() {
	int nombre1, nombre2;
	
	printf ("saiser nombra A = ");
	scanf ("%d", &nombre1);
	
	printf ("saiser nombra B = ");
	scanf ("%d", &nombre2);
	
	printf ("max est %d", maximum (nombre1, nombre2));

	return 0;
}

