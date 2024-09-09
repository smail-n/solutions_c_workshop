#include <stdio.h>
#include <stdlib.h>

int nomreRepitition (char string1[], char character){
    int i = 0, j = 0;

    while (string1 [i] != '\0'){
        if (string1 [i] == character)
            j++;
        i++;
    }
    return j;
}

int main(){
    char string1 [20], character;
    int N;

    printf ("enter a String : ");
    scanf ("%[^\n]", string1);

    printf ("enter a character for search for it in the string\ncharacter : ");
    scanf (" %c", &character);

    N = nomreRepitition (string1, character);

    printf ("Repitition of %c is : %d", character, N);
    return 0;
}
