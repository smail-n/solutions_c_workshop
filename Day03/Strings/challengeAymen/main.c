#include <stdio.h>
#include <stdlib.h>

int main(){
    int arry [10];
    int i, j, k = 0;


    printf ("you have 10 nombre for Fill...");
    for (i = 0; i < 10; i++){
        printf ("\nnambre %d : ",i+1);
        scanf ("%d", &arry [i]);
    }
    j = 0;
    for (i = 0; i < 10; i++){
        if (arry [i] != 0){
            arry [j] = arry [i];
            j++;
        }
        else
            k++;


    }

    for (i = j; i < j+k; i++)
        arry [i] = 0;

    printf ("\n");
    for (i = 0; i < 10; i++)
        printf ("%d", arry [i]);
    return 0;
}
