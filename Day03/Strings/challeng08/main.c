#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToMinuscules (char *string0){
    int i;

    for (i = 0; string0 [i] != '\0'; i++){
        string0 [i] = tolower (string0 [i]);
    }
}

int main(){
    char string0 [20];

    printf ("enter a string and we will convirt it to smaller character\nstring : ");
    gets (string0);

    convertToMinuscules (string0);

    printf ("the string convert is : %s", string0);

    return 0;
}
