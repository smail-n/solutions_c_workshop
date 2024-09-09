#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1 [20], string2 [20];

    printf ("enter a string 1 : ");         ////Fill the string 1
    scanf ("%[^\n]", string1);


    printf ("enter a string 2 : ");         //Fill the string 2
    getchar ();                             //get last \n
    fgets (string2, 20, stdin);
    string2 [strcspn (string2, "\n")] = '\0';


    if (strcasecmp (string1, string2) == 0)
        printf ("string 1 and string 2 are same ");
    else if (strcasecmp (string1, string2) == 1)
        printf ("string 1 is biger thene  string 2");
    else
        printf ("string 1 is smaller thene  string 2");


    return 0;
}
