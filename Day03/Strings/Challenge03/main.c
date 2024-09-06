#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char string1 [50], string2 [50];				//strings we have to bond
	char stringFinal [100];	
	int changeDoor = 0;
	int i, j;
	
	printf ("enter first string : ");				//first way to fill string
	scanf ("%[^\n]", string1);		
	
	
	getchar ();										//second way to fill string  (getchar for get a \n from laste scanf)
	printf ("enter second string : ");		
	fgets (string2, sizeof (string2), stdin);
	string2 [strcspn (string2, "\n")] = '\0';
	
	j = 0;
	for (i = 0; string2 [j] != '\0'; i++){			//bond the strings 
		
		if (string1 [i] == '\0'){
			if (changeDoor == 1)
				goto cont;
				
			changeDoor++;
			stringFinal [i] = ' ';
		}
		cont:
		
		if (changeDoor == 0)
			stringFinal [i] = string1 [i];
		else{
			stringFinal [i+1] = string2 [j];
			j++;
		}
	}
	
	stringFinal [i+1] = '\0';
	printf ("%s", stringFinal);
	return 0;
}
