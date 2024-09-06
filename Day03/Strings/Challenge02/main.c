#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char string [100];
	int i = 0;
	
	
	printf ("enter a string : ");
	fgets (string, sizeof (string), stdin);
	string [strcspn (string, "\n")] = '\0';         // delet \n from laste string
	
	while (string [i] != '\0')
		i++;
	
	printf ("nombre of character with espace is %i", i);
	
	/* esey way to solve without use strlen 
	
	printf ("nombre of character is %d", strcspn (string, "\n"));
	
	*/
	
	return 0;
}
