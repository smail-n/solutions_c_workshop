#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString (char *string1, char *string2){
    int i, j = 0;

    for (i = strlen (string1)-1; i >= 0; i--){
        string2 [j] = string1 [i];
        j++;
    }
    string2 [j] = '\0';     //for skip the error " a" and fiich my string by \0
}

int main(){
    char string1 [20];
    char string2 [20];

    printf ("enter a string : ");
    fgets (string1, 20, stdin);
    string1 [strcspn (string1, "\n")] = '\0';

    reverseString (&string1, &string2);

    printf ("the rever string is : %s", string2);

    return 0;
}
