#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char string0 [20];
    int j = 0, i;

    printf ("enter a string and we will convirt it to smaller character\nstring : ");
    gets(string0);
    for (i = 0; string0 [i] != '\0'; i++){
        if (string0 [i] != ' '){
            string0 [j] = string0 [i];
            j++;
        }
    }
    string0 [j] = '\0';
    printf ("your string without ESPACE is : %s", string0);

    return 0;
}
