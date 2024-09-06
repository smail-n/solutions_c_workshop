#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char string [20];
	
	printf ("enter a string :");
	scanf ("%[^\n]", string);
	
	printf ("%s", string);
	
	return 0;
}
