#include <stdio.h>
#include <stdlib.h>


int sum (int a, int b){
	return a+b;
}

int main() {
	int nombre1, nombre2;
	
	printf ("saiser nombra A = ");
	scanf ("%d", &nombre1);
	
	printf ("saiser nombra B = ");
	scanf ("%d", &nombre2);
	
	printf ("la somme de A + B = %d + %d = %d", nombre1, nombre2, sum (nombre1, nombre2));
	return 0;
}

