#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertTomajuscules (char *string0){
    int i;
    for (i = 0; string0 [i] != '\0'; i++){
        string0 [i] = toupper (string0 [i]);
    }
}

int main(){
    char string0 [20];

    printf ("enter a string : ");
    gets (string0);

    convertToMajuscules (string0);

    printf ("the string convert is : %s", string0);
    return 0;
}
