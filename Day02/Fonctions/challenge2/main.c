#include <stdio.h>
#include <stdlib.h>

long produit (int a, int b){
	return a*b;
}

int main() {
	int nombre1, nombre2;
	
	printf ("saiser nombra A = ");
	scanf ("%d", &nombre1);
	
	printf ("saiser nombra B = ");
	scanf ("%d", &nombre2);
	
	printf ("la preduit de A * B = %d * %d = %ld", nombre1, nombre2, produit (nombre1, nombre2));
	return 0;
}

